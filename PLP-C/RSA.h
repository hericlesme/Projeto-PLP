#define MAX_PRIME 25 //maior número primo usado pra gerar as chaves


void keyGen(struct public_key_class *pub, struct private_key_class *priv); //Gera as chaves
long long *rsa_encrypt(const char *message, const unsigned long message_size, const struct public_key_class *public); //cifra a mensagem
//char *rsa_decrypt(const long long *message, const unsigned long message_size, const struct private_key_class *pub); //descifra a mensagem (pra testes)

struct public_key_class {
	long long modulus;
	long long exponent;
};

struct private_key_class {
	long long modulus;
	long long exponent;
};
