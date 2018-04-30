class skill {
private:
	int damage;
	char skill_name[30];
public:
	skill(int, char *);

	int get_damage();
	char *get_skill_name();
};