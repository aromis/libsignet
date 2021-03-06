#include "signet.h"
#include "error.h"


/* Create a new signet and keysfile */
signet_t *		signet_new_keysfile(signet_type_t type, char *keysfile) {
	PUBLIC_FUNC_IMPL(signet_new_keysfile, type, keysfile);
}


/* Loading signet from and saving to file */
signet_t *		signet_from_file(const char *filename) {
	PUBLIC_FUNC_IMPL(signet_from_file, filename);	
}

int			signet_to_file(signet_t *signet, const char *filename) {
	PUBLIC_FUNC_IMPL(signet_to_file, signet, filename);	
}


/* Initializing and destroying signet*/
signet_t *		signet_deserialize(const unsigned char *in, size_t len) {
	PUBLIC_FUNC_IMPL(signet_deserialize, in, len);	
}

signet_t * 		signet_deserialize_b64(const char *b64_in) {
	PUBLIC_FUNC_IMPL(signet_deserialize_b64, b64_in);	
}

void 			signet_destroy(signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_destroy, signet);	
}


/* Serializing signet into binary and b64 */
unsigned char * 	signet_serialize(signet_t *signet, uint32_t *serial_size) {
	PUBLIC_FUNC_IMPL(signet_serialize, signet, serial_size);
}

char * 			signet_serialize_b64(signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_serialize_b64, signet);
}


/* Dumps signet into the file descriptor */
void 			signet_dump(FILE *fp, signet_t *signet) {
	_signet_dump(fp, signet);
}


/* Signet state retrieval */
int 			signet_get_count_fid(const signet_t *signet, unsigned char fid) {
	PUBLIC_FUNC_IMPL(signet_get_count_fid, signet, fid);	
}

int			signet_fid_exists(const signet_t *signet, unsigned char fid) {
	PUBLIC_FUNC_IMPL(signet_fid_exists, signet, fid);	
}

signet_state_t		signet_get_state(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_get_state, signet);	
}

signet_type_t		signet_get_type(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_get_type, signet);	
}


/* Retrieving field data */
unsigned char *		signet_fetch_fid_num(const signet_t *signet, unsigned char fid, unsigned int num, size_t *data_size) {
	PUBLIC_FUNC_IMPL(signet_fetch_fid_num, signet, fid, num, data_size);	
}

unsigned char *		signet_fetch_undef_name(const signet_t *signet, size_t name_len, const unsigned char *name, size_t *data_size) {
	PUBLIC_FUNC_IMPL(signet_fetch_undef_name, signet, name_len, name, data_size);	
}

ED25519_KEY *		signet_get_signkey(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_get_signkey, signet);	
}

unsigned char **	signet_get_msg_sign_keys(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_get_msg_sign_keys, signet);	
}

unsigned char **	signet_get_signet_sign_keys(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_get_signet_sign_keys, signet);	
}


/* Modifying the signet */
int			signet_add_field(signet_t *signet, unsigned char fid, size_t name_size, const unsigned char *name, size_t data_size, const unsigned char *data, unsigned char flags) {
	PUBLIC_FUNC_IMPL(signet_add_field, signet, fid, name_size, name, data_size, data, flags);
}

int			signet_add_field_string(signet_t *signet, unsigned char fid, const char *name, const char *data, unsigned char flags) {
	PUBLIC_FUNC_IMPL(signet_add_field_string, signet, fid, name, data, flags);	
}

int			signet_remove_fid_num(signet_t *signet, unsigned char fid, int num) {
	PUBLIC_FUNC_IMPL(signet_remove_fid_num, signet, fid, num);	
}

int			signet_remove_undef_name(signet_t *signet, size_t name_len, const unsigned char *name) {
	PUBLIC_FUNC_IMPL(signet_remove_undef_name, signet, name_len, name);	
}

int			signet_set_field(signet_t *signet, unsigned char fid, const char *name, const char *data, unsigned char flags) {
	PUBLIC_FUNC_IMPL(signet_set_field, signet, fid, name, data, flags);	
}

int			signet_set_id(signet_t *signet, const char *id) {
	PUBLIC_FUNC_IMPL(signet_set_id, signet, id);
}

int			signet_set_type(signet_t *signet, signet_type_t type) {
	PUBLIC_FUNC_IMPL(signet_set_type, signet, type);
}


/* Signet Splits */
signet_t *		signet_core_split(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_core_split, signet);	
}

signet_t *		signet_user_split(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_user_split, signet);	
}


/* Signet Fingerprints */
char *	 		signet_full_fingerprint(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_full_fingerprint, signet);	
}

char *	 		signet_core_fingerprint(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_core_fingerprint, signet);	
}

char *	 		signet_user_fingerprint(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_user_fingerprint, signet);	
}

char *			signet_ssr_fingerprint(const signet_t *signet) {
	PUBLIC_FUNC_IMPL(signet_ssr_fingerprint, signet);	
}


/* Signet verification */
signet_state_t		signet_full_verify(const signet_t *signet, const signet_t *orgsig, const unsigned char ** dime_pok) {
	PUBLIC_FUNC_IMPL(signet_full_verify, signet, orgsig, dime_pok);	
}

int			signet_verify_signature(const signet_t *signet, unsigned char sig_fid, const unsigned char *key) {
	PUBLIC_FUNC_IMPL(signet_verify_signature, signet, sig_fid, key);	
}

int			signet_verify_signature_key(const signet_t *signet, unsigned char sig_fid, ED25519_KEY *key) {
	PUBLIC_FUNC_IMPL(signet_verify_signature_key, signet, sig_fid, key);	
}

int	     	        signet_verify_message_sig(const signet_t *signet, ed25519_signature sig, const unsigned char *buf, size_t buf_len) {
	PUBLIC_FUNC_IMPL(signet_verify_message_sig, signet, sig, buf, buf_len);
}

/* Verify signature with signet TODO */ 

/* Signet sign */
int			signet_sign_full_sig(signet_t *signet,	ED25519_KEY *key) {
	PUBLIC_FUNC_IMPL(signet_sign_full_sig, signet, key);	
}

int			signet_sign_core_sig(signet_t *signet, ED25519_KEY *key) {
	PUBLIC_FUNC_IMPL(signet_sign_core_sig, signet, key);	
}

int			signet_sign_initial_sig(signet_t *signet, ED25519_KEY *key) {
	PUBLIC_FUNC_IMPL(signet_sign_initial_sig, signet, key);	
}

int			signet_sign_ssr_sig(signet_t *signet, ED25519_KEY *key) {
	PUBLIC_FUNC_IMPL(signet_sign_ssr_sig, signet, key);	
}

int			signet_sign_coc_sig(signet_t *signet, ED25519_KEY *key) {
	PUBLIC_FUNC_IMPL(signet_sign_coc_sig, signet, key);	
}

