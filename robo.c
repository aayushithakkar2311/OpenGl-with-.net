//
//#define STEP 0.1
//#define TORSO_HEIGHT 6.0
//#define TORSO_RADIUS 2.0
//#define UPPER_ARM_HEIGHT 3.0
//#define UPPER_ARM_RADIUS  0.5
//#define LOWER_ARM_HEIGHT 2.5
//#define LOWER_ARM_RADIUS  0.5
//#define UPPER_LEG_HEIGHT 4.0
//#define UPPER_LEG_RADIUS  0.6
//#define LOWER_LEG_HEIGHT 3.5
//#define LOWER_LEG_RADIUS  0.6
//#define ELBOW_RADIUS 0
//#define KNEE_RADIUS 0
//#define HAND_RADIUS 0.6
//#define FOOT_RADIUS 0.7
//#define SHOULDER_RADIUS 0.8
//#define HEAD_HEIGHT 1.5
//#define HEAD_RADIUS 1.0
//#define NECK_HEIGHT 1.0
//#define NECK_RADIUS 0.4
//
//#define NULL 0
//
//int option = -1;
//int animation = -3;
//int done = 0; 
//double rotate = 0;
//double horizontal = 0;
//
//void head();
//void torso();
//void left_upper_arm();
//void right_upper_arm();
//void left_upper_leg();
//void right_upper_leg();
//
//typedef float point[3];
//
//
//typedef struct treenode
//{
//	GLfloat m[16], n[16];
//	void(*f)();
//	struct treenode *sibling;
//	struct treenode *child;
//}treenode,treenode1;
//
//typedef treenode* t_ptr;
//
//static GLfloat theta[11] = { 0.0,0.0,0.0,180.0,0.0,180.0,0.0,
//180.0,0.0,180.0,0.0 }; /* initial joint angles */
//
//static GLint angle = 2;
//
//GLUquadricObj *t, *h, *lua, *lla, *rua, *rla, *lll, *rll, *rul, *lul;
//GLUquadricObj *relb, *lelb, *rknee, *lknee, *nk, *lhand, *rhand, *lfoot, *rfoot, *rsh, *lsh;
//
//double size = 1.0;
//
//treenode torso_node, head_node, lua_node, rua_node, lll_node, rll_node,
//lla_node, rla_node, rul_node, lul_node,
//relb_node, lelb_node, rknee_node, lknee_node, nk_node, lhand_node, rhand_node, lfoot_node, rfoot_node,
//rsh_node, lsh_node;
//
//
//treenode1 torso_node1, head_node1, lua_node1, rua_node1, lll_node1, rll_node1,
//lla_node1, rla_node1, rul_node1, lul_node1,
//relb_node1, lelb_node1, rknee_node1, lknee_node1, nk_node1, lhand_node1, rhand_node1, lfoot_node1, rfoot_node1,
//rsh_node1, lsh_node1;
//
//
//void setMaterial(GLfloat ambientR, GLfloat ambientG, GLfloat ambientB,
//	GLfloat diffuseR, GLfloat diffuseG, GLfloat diffuseB,
//	GLfloat specularR, GLfloat specularG, GLfloat specularB,
//	GLfloat shininess) {
//
//		GLfloat mat_specular[] = { specularR, specularG, specularB };
//	GLfloat mat_diffuse[] = { diffuseR, diffuseG,diffuseB };
//	GLfloat mat_ambient[] = { ambientR, ambientG,ambientR };
//	GLfloat mat_shininess = { 100.0 };
//	
//
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialf(GL_FRONT, GL_SHININESS, mat_shininess);
//
//	glEnable(GL_SMOOTH);
//	glEnable(GL_LIGHTING);
//	glEnable(GL_LIGHT0);
//	glDepthFunc(GL_LEQUAL);
//	glEnable(GL_DEPTH_TEST);
//
//
//
//
//
//}
//
//
//void traverse(treenode* root)
//{
//	if (root == NULL) return;
//	glPushMatrix();
//	glMultMatrixf(root->m);
//	root->f();
//	if (root->child != NULL) traverse(root->child);
//	glPopMatrix();
//	if (root->sibling != NULL) traverse(root->sibling);
//}
//
//
//void torso()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	setMaterial(0,0.5, 0, 0, 0.5, 0, 0, 0.5, 0, 1);
//	gluCylinder(t, TORSO_RADIUS / 1.2, TORSO_RADIUS, TORSO_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void head()
//{
//	glPushMatrix();
//	glTranslatef(0.0, HEAD_HEIGHT, 0.0);
//	glScalef(HEAD_RADIUS, HEAD_HEIGHT, HEAD_RADIUS);
//	gluSphere(h, HEAD_RADIUS, 10, 10);
//	//glasses
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	glTranslatef(0.0f, -0.4f, -0.15f);
//	setMaterial(0, 0, 0, 0, 0, 0, 0, 0, 0, 10);
//	gluCylinder(h, 0.9*HEAD_RADIUS, 0.9*HEAD_RADIUS, HEAD_HEIGHT / 5, 10, 10);
//	glPopMatrix();
//}
//
//void neck()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(nk, NECK_RADIUS, NECK_RADIUS, NECK_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void rightShoulder()
//{
//	glPushMatrix();
//	gluSphere(relb, SHOULDER_RADIUS, 10, 10);
//	glPopMatrix();
//}
//
//void leftShoulder()
//{
//	glPushMatrix();
//	gluSphere(lelb, SHOULDER_RADIUS, 10, 10);
//	glPopMatrix();
//}
//
//void rightElbow()
//{
//	/*glPushMatrix();
//	gluSphere(relb, ELBOW_RADIUS, 10, 10);
//	glPopMatrix();*/
//}
//
//void leftElbow()
//{
//	/*glPushMatrix();
//	gluSphere(lelb, ELBOW_RADIUS, 10, 10);
//	glPopMatrix();*/
//}
//
//void rightKnee()
//{
//	/*glPushMatrix();
//	gluSphere(rknee, KNEE_RADIUS, 10, 10);
//	glPopMatrix();*/
//}
//
//void leftKnee()
//{
//	//glPushMatrix();
//	//gluSphere(lknee, KNEE_RADIUS, 10, 10);
//	//glPopMatrix();
//}
//
//void leftFoot()
//{
//	glPushMatrix();
//	gluSphere(lknee, FOOT_RADIUS, 10, 10);
//	glPopMatrix();
//}
//
//void rightFoot()
//{
//	glPushMatrix();
//	gluSphere(lknee, FOOT_RADIUS, 10, 10);
//	glPopMatrix();
//}
//
//void rightHand()
//{
//	glPushMatrix();
//	gluSphere(lknee, HAND_RADIUS, 10, 10);
//	glPopMatrix();
//}
//
//void leftHand()
//{
//	glPushMatrix();
//	gluSphere(lknee, HAND_RADIUS, 10, 10);
//	glPopMatrix();
//
//}
//
//void left_upper_arm()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(lua, UPPER_ARM_RADIUS, UPPER_ARM_RADIUS - 0.1, UPPER_ARM_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void left_lower_arm()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(lla, LOWER_ARM_RADIUS - 0.1, LOWER_ARM_RADIUS - 0.15, LOWER_ARM_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void right_upper_arm()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(rua, UPPER_ARM_RADIUS, UPPER_ARM_RADIUS - 0.1, UPPER_ARM_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void right_lower_arm()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(rla, LOWER_ARM_RADIUS - 0.1, LOWER_ARM_RADIUS - 0.15, LOWER_ARM_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void left_upper_leg()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(lul, UPPER_LEG_RADIUS, UPPER_LEG_RADIUS - 0.1, UPPER_LEG_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void left_lower_leg()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(lll, LOWER_LEG_RADIUS - 0.1, LOWER_LEG_RADIUS - 0.2, LOWER_LEG_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void right_upper_leg()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(rul, UPPER_LEG_RADIUS, UPPER_LEG_RADIUS - 0.1, UPPER_LEG_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void right_lower_leg()
//{
//	glPushMatrix();
//	glRotatef(-90.0, 1.0, 0.0, 0.0);
//	gluCylinder(rll, LOWER_LEG_RADIUS - 0.1, LOWER_LEG_RADIUS - 0.2, LOWER_LEG_HEIGHT, 10, 10);
//	glPopMatrix();
//}
//
//void display(void)
//{
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-15, 15, -15, 15, -15, 15);
//	glRotatef(rotate, 0, 1, 0);
//	glMatrixMode(GL_MODELVIEW);
//
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glColor3f(0.4, 0.4, 0.4);
//
//	traverse(&torso_node);
//	glutSwapBuffers();
//}
//
//void inverseKinematics()
//{
//	switch (animation)
//	{
//	case 0: 
//		if (theta[5] < 180.0)
//		{
//			theta[5] += STEP;
//			theta[3] += STEP;
//			theta[1] -= 0.2*STEP;
//		}
//		else animation = option; 
//		glPushMatrix();
//
//		glLoadIdentity();
//		glTranslatef(0, 0, 0.0);
//		glRotatef(theta[5], 1.0, 0.0, 0.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rua_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0, 0, 0.0);
//		glRotatef(theta[3], 1.0, 0.0, 0.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, lua_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0.0, TORSO_HEIGHT - 0.25*NECK_HEIGHT, 0.0);
//		glRotatef(theta[1], 1.0, 0.0, 0.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, nk_node.m);
//
//		glPopMatrix();
//		break;
//	case 1:
//		if (theta[9] < 180.0)
//		{
//			theta[9] += STEP;
//			theta[10] -= STEP;
//		}
//		else animation = option;
//
//		glPushMatrix();
//
//		glLoadIdentity();
//		glTranslatef(TORSO_RADIUS / 2, 0.1*UPPER_LEG_HEIGHT, 0.0);
//		glRotatef(theta[9], 1.0, 0.0, 0.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rul_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0.0, UPPER_LEG_HEIGHT, 0.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rknee_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0.0, KNEE_RADIUS / 2, 0.0);
//		glRotatef(theta[10], 1.0, 0.0, 0.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rll_node.m);
//
//		glPopMatrix();
//		break;
//	case 6: case -1:
//		if (theta[9] < 180.0)
//		{
//			theta[9] += STEP;
//			theta[10] -= STEP;
//			theta[7] += STEP;
//			theta[8] -= STEP;
//			theta[5] -= 1.3*STEP;
//			theta[6] += STEP;
//			theta[3] += STEP;
//			theta[4] -= STEP;
//			horizontal -= 0.03*STEP;
//		}
//		else animation = option;
//
//		glPushMatrix();
//
//		glLoadIdentity();
//		glTranslatef(TORSO_RADIUS / 2, 0.1*UPPER_LEG_HEIGHT, 0.0);
//		glRotatef(theta[9], 1.0, 0.0, -1.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rul_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0.0, KNEE_RADIUS / 2, 0.0);
//		glRotatef(theta[10], 1.0, 0.0, -1.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rll_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0, horizontal, 0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, torso_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0, 0, 0.0);
//		glRotatef(theta[5], -1.0, 0.0, -1.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rua_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0, 0, 0.0);
//		glRotatef(theta[6], 1.0, 1.0, 1.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, rla_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0, 0, 0.0);
//		glRotatef(theta[3], 1.0, 0.0, -1.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, lua_node.m);
//
//		glLoadIdentity();
//		glTranslatef(0, 0, 0.0);
//		glRotatef(theta[4], -1.0, -1.0, 1.0);
//		glGetFloatv(GL_MODELVIEW_MATRIX, lla_node.m);
//
//		glPopMatrix();
//		break;
//	
//	default: animation = option;
//	}
//}
//
//void idle()
//{
//	switch (option)
//	{
//	case 0:
//		if (animation != option) inverseKinematics(); //an to teleytaio animation einai diaforetiko antistrepse to
//		else if (!done) //kane animation mexri na oloklirwthei
//		{
//			if (theta[5] > 30.0)
//			{
//				theta[5] -= STEP;
//				theta[3] -= STEP;
//				theta[1] += 0.2*STEP;
//			}
//			else done = 1;
//
//			glPushMatrix();
//
//			glLoadIdentity();
//			glTranslatef(0, 0, 0.0);
//			glRotatef(theta[5], 1.0, 0.0, 0.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, rua_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0, 0, 0.0);
//			glRotatef(theta[3], 1.0, 0.0, 0.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, lua_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0.0, TORSO_HEIGHT - 0.25*NECK_HEIGHT, 0.0);
//			glRotatef(theta[1], 1.0, 0.0, 0.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, nk_node.m);
//
//			glPopMatrix();
//		}
//		break;
//	case 1:
//		if (animation != option) inverseKinematics();
//		else if (!done)
//		{
//			if (theta[9] > 110.0)
//			{
//				theta[9] -= STEP;
//				theta[10] += STEP;
//			}
//			else done = 1;
//
//			glPushMatrix();
//
//			glLoadIdentity();
//			glTranslatef(TORSO_RADIUS / 2, 0.1*UPPER_LEG_HEIGHT, 0.0);
//			glRotatef(theta[9], 1.0, 0.0, 0.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, rul_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0.0, KNEE_RADIUS / 2, 0.0);
//			glRotatef(theta[10], 1.0, 0.0, 0.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, rll_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0, -horizontal, -horizontal);
//			glGetFloatv(GL_MODELVIEW_MATRIX, torso_node.m);
//
//			glPopMatrix();
//		}
//		break;
//	case 2:
//		inverseKinematics();
//		break;
//	case 6:
//		if (animation != option) inverseKinematics();
//		else
//		{
//			if (theta[9] > 130.0)
//			{
//				theta[9] -= STEP;
//				theta[10] += STEP;
//				theta[7] -= STEP;
//				theta[8] += STEP;
//				theta[5] += 1.3*STEP;
//				theta[6] -= STEP;
//				theta[3] -= STEP;
//				theta[4] += STEP;
//				horizontal += 0.03*STEP;
//			}
//			else animation = -1;
//
//			glPushMatrix();
//
//			glLoadIdentity();
//			glTranslatef(TORSO_RADIUS / 2, 0.1*UPPER_LEG_HEIGHT, 0.0);
//			glRotatef(theta[9], 1.0, 0.0, -1.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, rul_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0.0, KNEE_RADIUS / 2, 0.0);
//			glRotatef(theta[10], 1.0, 0.0, -1.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, rll_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0, horizontal, 0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, torso_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0, 0, 0.0);
//			glRotatef(theta[5], -1.0, 0.0, -1.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, rua_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0, 0, 0.0);
//			glRotatef(theta[6], 1.0, 1.0, 1.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, rla_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0, 0, 0.0);
//			glRotatef(theta[3], 1.0, 0.0, -1.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, lua_node.m);
//
//			glLoadIdentity();
//			glTranslatef(0, 0, 0.0);
//			glRotatef(theta[4], -1.0, -1.0, 1.0);
//			glGetFloatv(GL_MODELVIEW_MATRIX, lla_node.m);
//
//			glPopMatrix();
//		}
//		break;
//	
//	}
//	glutPostRedisplay();
//}
//
//void menu(int id)
//{
//	option = id;
//	done = 0;
//}
//
//void myReshape(int w, int h)
//{
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	if (w <= h)
//		glOrtho(-10.0, 10.0, -10.0 * (GLfloat)h / (GLfloat)w,
//			10.0 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
//	else
//		glOrtho(-10.0 * (GLfloat)w / (GLfloat)h,
//			10.0 * (GLfloat)w / (GLfloat)h, 0.0, 10.0, -10.0, 10.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//
//void myinit()
//{
//	
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glColor3f(1.0, 0.0, 0.0);
//
//	/* allocate quadrics with filled drawing style */
//
//	h = gluNewQuadric();
//	gluQuadricDrawStyle(h, GLU_FILL);
//	t = gluNewQuadric();
//	gluQuadricDrawStyle(t, GLU_FILL);
//	lua = gluNewQuadric();
//	gluQuadricDrawStyle(lua, GLU_FILL);
//	///////////////////////////////
//	lelb = gluNewQuadric();
//	gluQuadricDrawStyle(lelb, GLU_FILL);
//	lla = gluNewQuadric();
//	gluQuadricDrawStyle(lla, GLU_FILL);
//	rua = gluNewQuadric();
//	gluQuadricDrawStyle(rua, GLU_FILL);
//	rla = gluNewQuadric();
//	gluQuadricDrawStyle(rla, GLU_FILL);
//	lul = gluNewQuadric();
//	gluQuadricDrawStyle(lul, GLU_FILL);
//	lll = gluNewQuadric();
//	gluQuadricDrawStyle(lll, GLU_FILL);
//	rul = gluNewQuadric();
//	gluQuadricDrawStyle(rul, GLU_FILL);
//	rll = gluNewQuadric();
//	gluQuadricDrawStyle(rll, GLU_FILL);
//	rknee = gluNewQuadric();
//	gluQuadricDrawStyle(rknee, GLU_FILL);
//	lknee = gluNewQuadric();
//	gluQuadricDrawStyle(lknee, GLU_FILL);
//	relb = gluNewQuadric();
//	gluQuadricDrawStyle(relb, GLU_FILL);
//	nk = gluNewQuadric();
//	gluQuadricDrawStyle(nk, GLU_FILL);
//	rhand = gluNewQuadric();
//	gluQuadricDrawStyle(rhand, GLU_FILL);
//	lhand = gluNewQuadric();
//	gluQuadricDrawStyle(lhand, GLU_FILL);
//	lfoot = gluNewQuadric();
//	gluQuadricDrawStyle(lfoot, GLU_FILL);
//	rfoot = gluNewQuadric();
//	gluQuadricDrawStyle(rfoot, GLU_FILL);
//	rsh = gluNewQuadric();
//	gluQuadricDrawStyle(rsh, GLU_FILL);
//	lsh = gluNewQuadric();
//	gluQuadricDrawStyle(lsh, GLU_FILL);
//
//	/* Set up tree */
//
//	glLoadIdentity();
//	glRotatef(theta[0], 0.0, 1.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, torso_node.m);
//	torso_node.f = torso;
//	torso_node.sibling = NULL;
//	torso_node.child = &nk_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, TORSO_HEIGHT - 0.25*NECK_HEIGHT, 0.0);
//	glRotatef(theta[1], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, nk_node.m);
//	nk_node.f = neck;
//	nk_node.sibling = &lsh_node;
//	nk_node.child = &head_node;
//
//	glLoadIdentity();
//	glTranslatef(-(TORSO_RADIUS + UPPER_ARM_RADIUS), 0.9*TORSO_HEIGHT, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lsh_node.m);
//	lsh_node.f = leftShoulder;
//	lsh_node.sibling = &rsh_node;
//	lsh_node.child = &lua_node;
//
//	glLoadIdentity();
//	glTranslatef(TORSO_RADIUS + UPPER_ARM_RADIUS, 0.9*TORSO_HEIGHT, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rsh_node.m);
//	rsh_node.f = rightShoulder;
//	rsh_node.sibling = &lul_node;
//	rsh_node.child = &rua_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, 0.75*NECK_HEIGHT, 0.0);
//	glRotatef(theta[2], 0.0, 1.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, head_node.m);
//	head_node.f = head;
//	head_node.sibling = NULL;
//	head_node.child = NULL;
//
//	glLoadIdentity();
//	glTranslatef(0, 0, 0.0);
//	glRotatef(theta[3], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lua_node.m);
//	lua_node.f = left_upper_arm;
//	lua_node.sibling = NULL;
//	lua_node.child = &lelb_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, UPPER_ARM_HEIGHT, 0.0);
//	glRotatef(theta[4], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lelb_node.m);
//	lelb_node.f = leftElbow;
//	lelb_node.sibling = NULL;
//	lelb_node.child = &lla_node;
//
//	glLoadIdentity();
//	glTranslatef(0, 0, 0.0);
//	glRotatef(theta[5], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rua_node.m);
//	rua_node.f = right_upper_arm;
//	rua_node.sibling = NULL;
//	rua_node.child = &relb_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, UPPER_ARM_HEIGHT, 0.0);
//	glRotatef(theta[4], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, relb_node.m);
//	relb_node.f = rightElbow;
//	relb_node.sibling = NULL;
//	relb_node.child = &rla_node;
//
//	glLoadIdentity();
//	glTranslatef(-TORSO_RADIUS / 2, 0.1*UPPER_LEG_HEIGHT, 0.0);
//	glRotatef(theta[7], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lul_node.m);
//	lul_node.f = left_upper_leg;
//	lul_node.sibling = &rul_node;
//	lul_node.child = &lknee_node;
//
//	glLoadIdentity();
//	glTranslatef(TORSO_RADIUS / 2, 0.1*UPPER_LEG_HEIGHT, 0.0);
//	glRotatef(theta[9], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rul_node.m);
//	rul_node.f = right_upper_leg;
//	rul_node.sibling = NULL;
//	rul_node.child = &rknee_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, ELBOW_RADIUS, 0.0);
//	glRotatef(theta[4], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lla_node.m);
//	lla_node.f = left_lower_arm;
//	lla_node.sibling = NULL;
//	lla_node.child = &lhand_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, ELBOW_RADIUS, 0.0);
//	glRotatef(theta[4], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rla_node.m);
//	rla_node.f = right_lower_arm;
//	rla_node.sibling = NULL;
//	rla_node.child = &rhand_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, LOWER_ARM_HEIGHT, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rhand_node.m);
//	rhand_node.f = rightHand;
//	rhand_node.sibling = NULL;
//	rhand_node.child = NULL;
//
//	glLoadIdentity();
//	glTranslatef(0.0, LOWER_ARM_HEIGHT, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lhand_node.m);
//	lhand_node.f = leftHand;
//	lhand_node.sibling = NULL;
//	lhand_node.child = NULL;
//
//	glLoadIdentity();
//	glTranslatef(0.0, UPPER_LEG_HEIGHT, 0.0);
//	glRotatef(theta[10], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lknee_node.m);
//	lknee_node.f = leftKnee; 
//	lknee_node.sibling = NULL;
//	lknee_node.child = &lll_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, KNEE_RADIUS / 2, 0.0);
//	glRotatef(theta[8], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lll_node.m);
//	lll_node.f = left_lower_leg;
//	lll_node.sibling = NULL;
//	lll_node.child = &lfoot_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, LOWER_LEG_HEIGHT, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, lfoot_node.m);
//	lfoot_node.f = leftFoot;
//	lfoot_node.sibling = NULL;
//	lfoot_node.child = NULL;
//
//	glLoadIdentity();
//	glTranslatef(0.0, UPPER_LEG_HEIGHT, 0.0);
//	glRotatef(theta[10], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rknee_node.m);
//	rknee_node.f = rightKnee;
//	rknee_node.sibling = NULL;
//	rknee_node.child = &rll_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, KNEE_RADIUS / 2, 0.0);
//	glRotatef(theta[10], 1.0, 0.0, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rll_node.m);
//	rll_node.f = right_lower_leg;
//	rll_node.sibling = NULL;
//	rll_node.child = &rfoot_node;
//
//	glLoadIdentity();
//	glTranslatef(0.0, LOWER_LEG_HEIGHT, 0.0);
//	glGetFloatv(GL_MODELVIEW_MATRIX, rfoot_node.m);
//	rfoot_node.f = rightFoot;
//	rfoot_node.sibling = NULL;
//	rfoot_node.child = NULL;
//	glLoadIdentity();
//}
//
//int main(int argc, char **argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowSize(600, 600);
//	glutCreateWindow("Robot");
//	myinit();
//	glutReshapeFunc(myReshape);
//	glutIdleFunc(idle);
//	glutDisplayFunc(display);
//
//	glutCreateMenu(menu);
//	glutAddMenuEntry(" Raise Hands ", 0);
//	glutAddMenuEntry(" Raise Leg ", 1);
//	glutAddMenuEntry(" Dance ", 6);
//	glutAddMenuEntry(" Reset ", 2);
//	
//
//	glutAttachMenu(GLUT_RIGHT_BUTTON);
//
//	glutMainLoop();
//	return 0;
//}
//
//




//#define TORSO_WIDTH 5
//#define TORSO_HEIGHT 6
//#define TORSO_DEPTH 3
//
//#define NECK_WIDTH 1
//#define NECK_HEIGHT 1
//#define NECK_DEPTH 1
//
//#define HEAD_WIDTH 3
//#define HEAD_HEIGHT 2
//#define HEAD_DEPTH 3
//
//#define ARM_U_WIDTH 1
//#define ARM_U_HEIGHT 2.5
//#define ARM_U_DEPTH 1
//#define ARM_L_WIDTH 1
//#define ARM_L_HEIGHT 2.5
//#define ARM_L_DEPTH 1
//
//#define HAND_WIDTH 1
//#define HAND_HEIGHT 0.5
//#define HAND_DEPTH 1
//
//#define LEG_U_WIDTH 1.5
//#define LEG_U_HEIGHT 3
//#define LEG_U_DEPTH 1
//#define LEG_L_WIDTH 1.5
//#define LEG_L_HEIGHT 3
//#define LEG_L_DEPTH 1
//
//#define FOOT_WIDTH 1
//#define FOOT_HEIGHT 0.5
//#define FOOT_DEPTH 1
//
//
//void setMaterial(GLfloat ambientR, GLfloat ambientG, GLfloat ambientB,
//		GLfloat diffuseR, GLfloat diffuseG, GLfloat diffuseB,
//		GLfloat specularR, GLfloat specularG, GLfloat specularB,
//		GLfloat shininess) {
//	
//		GLfloat mat_specular[] = { specularR, specularG, specularB };
//		GLfloat mat_diffuse[] = { diffuseR, diffuseG,diffuseB };
//		GLfloat mat_ambient[] = { ambientR, ambientG,ambientR };
//		GLfloat mat_shininess = { 100.0 };
//		
//	
//		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//		glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//		glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//		glMaterialf(GL_FRONT, GL_SHININESS, mat_shininess);
//	
//		glEnable(GL_SMOOTH);
//		glEnable(GL_LIGHTING);
//		glEnable(GL_LIGHT0);
//		glDepthFunc(GL_LEQUAL);
//		glEnable(GL_DEPTH_TEST);
//}
//
//float width = 500;
//float height = 500;
//
//float xt = 0, yt = 0, zt = 0, z1t = 0;
//float t = zt;
//int toggle = 1;
//int Blink = 1;
//int type1 = 1, type2 = 1;
//int solid = 1;
//
//void head(void);
//void init(void);
//void display(void);
//void reshape(int width, int height);
//void keyboard(unsigned char, int, int);
//void torso(void);
//void arms(int type);
//void lowers(int type);
//
//void torso() {
//	/*
//	 * This function creates the torso of the robot
//	 */
//	glPushMatrix();
//	glScalef(TORSO_WIDTH, TORSO_HEIGHT, 3);
//	setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//	glutSolidCube(1.0);
//	glPopMatrix();
//}
//
//void head() {
//	/*
//	 * This function creates the head of the robot.
//	 * Head, Neck, Eyes, Mouth and Nose are drawn by this function.
//	 */
//	glPushMatrix();
//
//	/* Neck */
//	glTranslatef(0.0, TORSO_HEIGHT / 2 + NECK_HEIGHT, TORSO_DEPTH / 2);
//	glScalef(NECK_WIDTH, NECK_HEIGHT, NECK_DEPTH);
//	setMaterial(0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 1);
//	glutSolidCube(1.0);
//	glPopMatrix();
//
//	/* Head */
//	glPushMatrix();
//	glTranslatef(0.0, TORSO_HEIGHT / 2 + NECK_HEIGHT + HEAD_HEIGHT / 2, TORSO_DEPTH / 2);
//	glScalef(HEAD_WIDTH, HEAD_HEIGHT, HEAD_DEPTH);
//	setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//	glutSolidCube(1.0);
//	glPopMatrix();
//
//
//	if (Blink == 0) {
//		setMaterial(0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
//	}
//	else {
//		setMaterial(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
//	}
//
//	/* Right Eye */
//	glPushMatrix();
//	glTranslatef(1, TORSO_HEIGHT / 2 + NECK_HEIGHT + HEAD_HEIGHT * 2 / 3, HEAD_DEPTH);
//	glScalef(0.5, 0.5, 0);
//	//glColor3f(0.7, 0.7, 0.7);
//	glutSolidCube(1.0);
//	glPopMatrix();
//
//	/* Left Eye */
//	
//	if (Blink == 0) {
//		setMaterial(0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
//	}
//	else {
//		setMaterial(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
//	}
//
//	glPushMatrix();
//	glTranslatef(-1, TORSO_HEIGHT / 2 + NECK_HEIGHT + HEAD_HEIGHT * 2 / 3, HEAD_DEPTH);
//	glScalef(0.5, 0.5, 0);
//	glutSolidCube(1.0);
//	glPopMatrix();
//
//	/* Mouth and Nose */
//
//	glPushMatrix();
//	glTranslatef(0, TORSO_HEIGHT / 2 + NECK_HEIGHT + HEAD_HEIGHT / 2 - 0.1, HEAD_DEPTH);
//	glScalef(0.3, 0.3, 0);
//	setMaterial(0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
//	glutSolidCube(1.0);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, TORSO_HEIGHT / 2 + NECK_HEIGHT + HEAD_HEIGHT / 2 - 0.6, HEAD_DEPTH);
//	glScalef(1.7, 0.3, 0);
//	setMaterial(0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
//	glutSolidCube(1.0);
//	glPopMatrix();
//
//}
//
//void arms(int type) {
//
//
//	 /* DRAWING ON THE RIGHT SIDE */
//
//	if (type == 0) {
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(-20, 1, 0, 0);
//		glScalef(ARM_U_WIDTH, ARM_U_HEIGHT, ARM_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT / 2 + 1.5, TORSO_DEPTH / 2);
//		glRotatef(-60, 1, 0, 0);
//		glScalef(ARM_L_WIDTH, ARM_L_HEIGHT, ARM_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//
//		glPopMatrix();
//
//		glPushMatrix();
//		glRotatef(-60, 1, 0, 0);
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT - HAND_HEIGHT / 2 + 0.2, TORSO_DEPTH / 2);
//		glScalef(HAND_WIDTH, HAND_HEIGHT, HAND_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		/* DRAWING ON THE LEFT SIDE */
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(20, 1, 0, 0);
//		glScalef(ARM_U_WIDTH, ARM_U_HEIGHT, ARM_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(-10, 1, 0, 0);
//		glScalef(ARM_L_WIDTH, ARM_L_HEIGHT, ARM_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glRotatef(-10, 1, 0, 0);
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT - HAND_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(HAND_WIDTH, HAND_HEIGHT, HAND_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//	}
//	else if (type == 1 || type == 3) {
//
//		/* DRAWING ON THE RIGHT SIDE */
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(ARM_U_WIDTH, ARM_U_HEIGHT, ARM_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(ARM_L_WIDTH, ARM_L_HEIGHT, ARM_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT - HAND_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(HAND_WIDTH, HAND_HEIGHT, HAND_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		/* DRAWING ON THE LEFT SIDE */
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(ARM_U_WIDTH, ARM_U_HEIGHT, ARM_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(ARM_L_WIDTH, ARM_L_HEIGHT, ARM_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT - HAND_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(HAND_WIDTH, HAND_HEIGHT, HAND_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//	}
//	else if (type == 2) {
//
//		/* DRAWING ON THE RIGHT SIDE */
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(20, 1, 0, 0);
//		glScalef(ARM_U_WIDTH, ARM_U_HEIGHT, ARM_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT / 2 + 1.5, TORSO_DEPTH / 2);
//		glRotatef(-10, 1, 0, 0);
//		glScalef(ARM_L_WIDTH, ARM_L_HEIGHT, ARM_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 + ARM_U_WIDTH / 2 + 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT + 1.1 + HAND_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(-10, 1, 0, 0);
//		glScalef(HAND_WIDTH, HAND_HEIGHT, HAND_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		/* DRAWING ON THE LEFT SIDE */
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(-20, 1, 0, 0);
//		glScalef(ARM_U_WIDTH, ARM_U_HEIGHT, ARM_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1.1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT / 2 + 1.2, TORSO_DEPTH / 2);
//		glRotatef(-60, 1, 0, 0);
//		glScalef(ARM_L_WIDTH, ARM_L_HEIGHT, ARM_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glRotatef(-60, 1, 0, 0);
//		glTranslatef(-TORSO_WIDTH / 2 - ARM_U_WIDTH / 2 - 1, TORSO_HEIGHT / 2 - ARM_U_HEIGHT - ARM_L_HEIGHT + HAND_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(HAND_WIDTH, HAND_HEIGHT, HAND_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//	}
//}
//
//void lowers(int type) {
//	
//	if (type == 0) {
//
//		/* DRAWING ON THE RIGHT SIDE */
//
//		glPushMatrix();
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(0, 1, 0, 0);
//		glScalef(LEG_U_WIDTH, ARM_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2 + 0.5, TORSO_DEPTH / 2);
//		glRotatef(2, 1, 0, 0);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//
//		glScalef(FOOT_WIDTH, FOOT_HEIGHT, FOOT_DEPTH);
//		glTranslatef(0, -LEG_L_HEIGHT / 2 - FOOT_HEIGHT / 2, FOOT_DEPTH / 2);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		/* DRAWING ON THE LEFT SIDE */
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(-20, 1, 0, 0);
//		glScalef(LEG_U_WIDTH, ARM_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2 + 0.5, TORSO_DEPTH / 2);
//		glRotatef(20, 1, 0, 0);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//
//		glScalef(FOOT_WIDTH, FOOT_HEIGHT, FOOT_DEPTH);
//		glTranslatef(0, -LEG_L_HEIGHT / 2 - FOOT_HEIGHT / 2, FOOT_DEPTH / 2);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//	}
//	else if (type == 1 || type == 3) {
//
//		/* DRAWING ON THE RIGHT SIDE */
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(LEG_U_WIDTH, LEG_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2 + 0.5, TORSO_DEPTH / 2);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//
//		glScalef(FOOT_WIDTH, FOOT_HEIGHT, FOOT_DEPTH);
//		glTranslatef(0, -LEG_L_HEIGHT / 2 - FOOT_HEIGHT / 2, FOOT_DEPTH / 2);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		/* DRAWING ON THE LEFT SIDE */
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(LEG_U_WIDTH, ARM_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2 + 0.5, TORSO_DEPTH / 2);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//
//		glScalef(FOOT_WIDTH, FOOT_HEIGHT, FOOT_DEPTH);
//		glTranslatef(0, -LEG_L_HEIGHT / 2 - FOOT_HEIGHT / 2, FOOT_DEPTH / 2);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//	}
//	else if (type == 2) {
//
//		/* DRAWING ON THE RIGHT SIDE */
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(-20, 1, 0, 0);
//		glScalef(LEG_U_WIDTH, LEG_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2 + 0.5, TORSO_DEPTH / 2);
//		glRotatef(2, 1, 0, 0);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//
//		glScalef(FOOT_WIDTH, FOOT_HEIGHT, FOOT_DEPTH);
//		glTranslatef(0, -LEG_L_HEIGHT / 2 - FOOT_HEIGHT / 2, FOOT_DEPTH / 2);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		/* DRAWING ON THE LEFT SIDE */
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(0, 1, 0, 0);
//		glScalef(LEG_U_WIDTH, ARM_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2, TORSO_DEPTH / 2);
//		glRotatef(10, 1, 0, 0);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//
//		glScalef(FOOT_WIDTH, FOOT_HEIGHT, FOOT_DEPTH);
//		glTranslatef(0, -LEG_L_HEIGHT / 2 - FOOT_HEIGHT / 2, FOOT_DEPTH / 2);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//	}
//	else if (type == 3) {
//
//		/* DRAWING ON THE RIGHT SIDE */
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(LEG_U_WIDTH, ARM_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(TORSO_WIDTH / 2 - LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2 + 0.5, TORSO_DEPTH / 2);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		/* DRAWING ON THE LEFT SIDE */
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT / 2, TORSO_DEPTH / 2);
//		glScalef(LEG_U_WIDTH, ARM_U_HEIGHT, LEG_U_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//
//		glPushMatrix();
//		glTranslatef(-TORSO_WIDTH / 2 + LEG_U_WIDTH / 2, -TORSO_HEIGHT / 2 - LEG_U_HEIGHT - LEG_L_HEIGHT / 2 + 0.5, TORSO_DEPTH / 2);
//		glScalef(LEG_L_WIDTH, LEG_L_HEIGHT, LEG_L_DEPTH);
//		setMaterial(1, 0.5, 0, 1, 0.5, 0, 1, 0.5, 0, 1);
//		glutSolidCube(1.0);
//		glPopMatrix();
//	}
//}
//
//void display(void) {
//	
//	glEnable(GL_DEPTH_TEST);
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//
//	/* For switching between Solid and WireFrame mode */
//	if (!solid)
//		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	else
//		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
//
//	gluLookAt(0, 5, 25, 0, 0, 0, 0, 1, 0);
//
//	/* Drawing floor Surface */
//	glPushMatrix();
//
//	glColor3f(0, 0.4, 0);
//	glBegin(GL_POLYGON);
//	glVertex3f(15.0, -1.5*TORSO_HEIGHT, 15.0);
//	glVertex3f(15.0, -1.5*TORSO_HEIGHT, -15.0);
//	glVertex3f(-15.0, -1.5*TORSO_HEIGHT, -15.0);
//	glVertex3f(-15.0, -1.5*TORSO_HEIGHT, 15.0);
//	glEnd();
//
//	glPopMatrix();
//
//	/* Drawing Robot 1*/
//	if (toggle)
//		zt = t;
//
//	glPushMatrix();
//
//	glTranslated(xt - 5, yt, zt);
//	torso();		// draw torso
//	head();			// draw head
//
//	/* Changing type1 here gives different postures */
//	arms(type1);		// draw arms
//	lowers(type1);		// draw legs
//
//	glPopMatrix();
//
//
//	/* Drawing Robot 2 */
//	if (!toggle)
//		z1t = t;
//
//	glPushMatrix();
//
//	glTranslated(xt + 5, yt, z1t);
//	torso();			// draw torso
//	head();				// draw head
//
//	/* Changing type1 here gives different postures */
//	arms(type2);		// draw arms
//	lowers(type2);		// draw legs
//
//	glPopMatrix();
//
//	/* Drawing other background objects*/
//
//	/* toruses */
//	if (toggle == 0) {
//		setMaterial(1, 0, 0, 1, 0, 0, 1, 0, 0, 10);
//	}
//	else {
//		setMaterial(0, 1, 0, 0, 1, 0, 0, 1, 0, 10);
//	}
//	glPushMatrix();
//	glTranslatef(13.0, -1 * TORSO_HEIGHT + 2, 13.0);
//	glutSolidSphere(2, 10, 20);
//	glPopMatrix();
//
//	if (toggle == 1) {
//		setMaterial(1, 0, 0, 1, 0, 0, 1, 0, 0, 10);
//	}
//	else {
//		setMaterial(0, 1, 0, 0, 1, 0, 0, 1, 0, 10);
//	}
//	glPushMatrix();
//	glTranslatef(-13.0, -1 * TORSO_HEIGHT + 2, 13.0);
//	glutSolidSphere(2, 10, 20);
//	glPopMatrix();
//
//	/* spheres */
//	glColor3f(0.0, 1.0, 1.0);
//	for (int i = -15; i < 15; i += 3) {
//		glPushMatrix();
//		glTranslatef(0.0, -1 * TORSO_HEIGHT, i);
//		glutSolidSphere(1.0, 10.0, 10.0);
//		glPopMatrix();
//	}
//
//	glutSwapBuffers();
//}
//
//void keyboard(unsigned char key, int x, int y) {
//	
//	switch (key) {
//	case 'w':
//		if (solid == 0) {
//			solid = 1;
//		}
//		else {
//			solid = 0;
//		}
//		break;
//	case 'f':	if (t == 13)
//		t += 0.0;
//				else
//		t += 0.5;
//		if (toggle) {
//			type1 = (type1 + 1) % 4;
//		}
//		else {
//			type2 = (type2 + 1) % 4;
//		}
//		break;
//	case 'b':	if (t == -15)
//		t -= 0.0;
//				else
//		t -= 0.5;
//		if (toggle) {
//			type1 = (type1 - 1);
//			if (type1 < 0)
//				type1 = 3;
//		}
//		else {
//			type2 = (type2 - 1);
//			if (type2 < 0)
//				type2 = 3;
//		}
//		break;
//	case 't':	if (toggle)
//	{
//		toggle = 0;
//		t = z1t;
//	}
//				else
//	{
//		toggle = 1;
//		t = zt;
//	}
//				break;
//
//	case 'e':	if (Blink)
//	{
//		Blink = 0;
//		//t = z1t;
//	}
//				else
//	{
//		Blink = 1;
//		//t = zt;
//	}
//				break;
//	case 'q': exit(0);
//		break;
//	}
//	glutPostRedisplay();
//}
//
//void reshape(int w, int h) {
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(100.0, (GLfloat)w / (GLfloat)h, 0.5, 100.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//
//void init(void) {
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//}
//
//int main(int argc, char **argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
//	glutInitWindowSize(width, height);
//	glutCreateWindow("------------- BOT RACER -------------");
//	init();
//	glutReshapeFunc(reshape);
//	glutDisplayFunc(display);
//	glutKeyboardFunc(keyboard);
//	glutMainLoop();
//	return 0;
//}





//GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//GLfloat no_shininess[] = { 0.5 };
//GLfloat low_shininess[] = { 5.0 };
//GLfloat high_shininess[] = { 100.0 };
//GLfloat mat_emission[] = { 0.3, 0.2, 0.2, 0.0 };
//
//static float yy = 0.0;
//static int angle = 0, lshoulder = 0, lelbow = 0, rshoulder = 0, relbow = 0,
//lhips = 0, rhips = 0, lfoot = 0, rfoot = 0, flagneck = 0, flaglshoulder = 0,
//flaglelbow = 0, flagrshoulder = 0, flagrelbow = 0, flaglhips = 0,
//flagrhips = 0, flaglfoot = 0, flagrfoot = 0;
//
//void init(void)
//{
//	glClearColor(0, 0, 0, 0);
//	glShadeModel(GL_SMOOTH);
//	glEnable(GL_DEPTH_TEST);
//	glEnable(GL_LIGHTING);
//	glEnable(GL_LIGHT0);
//}
//
//void draw_head(void)
//{
//	glPushMatrix();
//	glTranslatef(0, 3.5, yy);
//	glTranslatef(0, 1, 0);
//	glutSolidCube(2);
//	glPopMatrix();
//}
//
//void draw_body(void)
//{
//	glPushMatrix();
//	glTranslatef(0, 1.5, yy);
//	glScalef(0.5, 1, 0.4);
//	glutSolidCube(4);
//
//	glPopMatrix();
//}
//
//void draw_leftshoulder(void)
//{
//	glPushMatrix();
//	glTranslatef(1.5, 3, yy);
//	glRotatef(lshoulder, 1, 0, 0);
//	//glPopMatrix();
//	glTranslatef(0, -0.5, 0);
//	glScalef(0.4, 1, 0.5);
//	glutSolidCube(2);
//	//glPushMatrix();
//	glScalef(1 / 0.4, 1 / 1, 1 / 0.5);
//	glTranslatef(0, -1.4, 0);
//	glRotatef(lelbow, 1, 0, 0);
//	glutWireSphere(0.4, 200, 500);
//
//	glScalef(0.4, 1, 0.5);
//	glTranslatef(0, -1.4, 0);
//	glutSolidCube(2);
//
//	glPopMatrix();
//}
//
//void draw_rightshoulder(void)
//{
//	glPushMatrix();
//	glTranslatef(-1.5, 3, yy);
//	glRotatef(rshoulder, 1, 0, 0);
//
//	glTranslatef(0, -0.5, 0);
//	glScalef(0.4, 1, 0.5);
//	glutSolidCube(2);
//
//	glScalef(1 / 0.4, 1 / 1, 1 / 0.5);
//	glTranslatef(0, -1.4, 0);
//	glRotatef(relbow, 1, 0, 0);
//	glutWireSphere(0.4, 200, 500);
//
//	glScalef(0.4, 1, 0.5);
//	glTranslatef(0, -1.4, 0);
//	glutSolidCube(2);
//
//	glPopMatrix();
//}
//
//void draw_leftfoot(void)
//{
//	glPushMatrix();
//	glTranslatef(-0.6, -0.6, yy);
//	glRotatef(lfoot, 1, 0, 0);
//	glTranslatef(0, -1, 0);
//
//	glScalef(0.4, 1, 0.5);
//	glutSolidCube(2);
//
//	glScalef(1 / 0.4, 1 / 1, 1 / 0.5);
//	glTranslatef(0, -1.4, 0);
//	glRotatef(lhips, 1, 0, 0);
//	glutWireSphere(0.4, 200, 500);
//
//	glScalef(0.4, 1, 0.5);
//
//	glScalef(1, 1, 1);
//	glTranslatef(0, -1.4, 0);
//	glutSolidCube(2);
//
//	glPopMatrix();
//}
//
//void draw_rightfoot(void)
//{
//	glPushMatrix();
//	glTranslatef(0.6, -0.6, yy);
//	glRotatef(rfoot, 1, 0, 0);
//	glTranslatef(0, -1, 0);
//	glScalef(0.4, 1, 0.5);
//	glutSolidCube(2);
//
//	glScalef(1 / 0.4, 1 / 1, 1 / 0.5);
//	glTranslatef(0, -1.4, 0);
//	glRotatef(rhips, 1, 0, 0);
//	glutWireSphere(0.4, 200, 500);
//
//	glScalef(0.4, 1, 0.5);
//
//	glScalef(1, 1, 1);
//	glTranslatef(0, -1.4, 0);
//	glutSolidCube(2);
//
//	glPopMatrix();
//}
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//	glPushMatrix();
//
//	glRotatef(angle, 0, 1, 0);
//
//	glTranslatef(0, 4, 0);
//	draw_body();
//
//	draw_head();
//
//	draw_leftshoulder();
//	draw_rightshoulder();
//
//	draw_leftfoot();
//	draw_rightfoot();
//
//	glPopMatrix();
//	glutSwapBuffers();
//}
//
//void reshape(int w, int h)
//{
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-8, 8, -8, 8, -10, 10);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(0.0, 4.0, 5, 0.0, 4, 0.0, 0.0, 1.0, 0.0);
//
//}
//
//void keyboard(unsigned char key, int x, int y)
//{
//	switch (key)
//	{
//	case '0':
//		angle = (angle + 5) % 360;
//		glutPostRedisplay();
//		break;
//	case '1':
//		angle = (angle - 5) % 360;
//		glutPostRedisplay();
//		break;
//	case '2':
//		if (flaglshoulder)
//		{
//			lshoulder += 5;
//			if (lshoulder >= 60)flaglshoulder = 0;
//		}
//		else
//		{
//			lshoulder -= 5;
//			if (lshoulder <= -180)flaglshoulder = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case '3':
//		if (flagrshoulder)
//		{
//			rshoulder += 5;
//			if (rshoulder >= 60)flagrshoulder = 0;
//		}
//		else
//		{
//			rshoulder -= 5;
//			if (rshoulder <= -180)flagrshoulder = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case '4':
//		if (flaglelbow)
//		{
//			lelbow += 5;
//			if (lelbow >= 0)flaglelbow = 0;
//		}
//		else
//		{
//			lelbow -= 5;
//			if (lelbow <= -120)flaglelbow = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case '5':
//		if (flagrelbow)
//		{
//			relbow += 5;
//			if (relbow >= 0)flagrelbow = 0;
//		}
//		else
//		{
//			relbow -= 5;
//			if (relbow <= -120)flagrelbow = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case '6':
//		if (flaglhips)
//		{
//			lhips += 5;
//			if (lhips >= 120)flaglhips = 0;
//		}
//		else
//		{
//			lhips -= 5;
//			if (lhips <= 0)flaglhips = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case '7':
//		if (flagrhips)
//		{
//			rhips += 5;
//			if (rhips >= 120)flagrhips = 0;
//		}
//		else
//		{
//			rhips -= 5;
//			if (rhips <= 0)flagrhips = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case '8':
//		if (flaglfoot)
//		{
//			lfoot += 5;
//			if (lfoot >= 60)flaglfoot = 0;
//		}
//		else
//		{
//			lfoot -= 5;
//			if (lfoot <= -60)flaglfoot = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case '9':
//		if (flagrfoot)
//		{
//			rfoot += 5;
//			if (rfoot >= 60)flagrfoot = 0;
//		}
//		else
//		{
//			rfoot -= 5;
//			if (rfoot <= -60)flagrfoot = 1;
//		}
//		glutPostRedisplay();
//		break;
//	case 'w':
//		if (yy < 8.0) {
//			yy += 0.05;
//		}
//		else {
//			yy = -8.0;
//		}
//
//		if (flaglshoulder)
//		{
//			lshoulder += 5;
//			if (lshoulder >= 60)flaglshoulder = 0;
//		}
//		else
//		{
//			lshoulder -= 5;
//			if (lshoulder <= -60)flaglshoulder = 1;
//		}
//		glutPostRedisplay();
//		//3
//		if (flagrshoulder)
//		{
//			rshoulder -= 5;
//			if (rshoulder <= -60)flagrshoulder = 0;
//		}
//		else
//		{
//			rshoulder += 5;
//			if (rshoulder >= 60)flagrshoulder = 1;
//		}
//		glutPostRedisplay();
//		//4
//		if (flaglelbow)
//		{
//			lelbow += 2.5;
//			if (lelbow >= 0)flaglelbow = 0;
//		}
//		else
//		{
//			lelbow -= 2.5;
//			if (lelbow <= -30)flaglelbow = 1;
//		}
//		glutPostRedisplay();
//		//5
//		if (flagrelbow)
//		{
//			relbow += 2.5;
//			if (relbow >= 0)flagrelbow = 0;
//		}
//		else
//		{
//			relbow -= 2.5;
//			if (relbow <= -30)flagrelbow = 1;
//		}
//		glutPostRedisplay();
//		//6
//		if (flaglhips)
//		{
//			lhips += 2.5;
//			if (lhips >= 30)flaglhips = 0;
//		}
//		else
//		{
//			lhips -= 2.5;
//			if (lhips <= 0)flaglhips = 1;
//		}
//		glutPostRedisplay();
//		//7
//		if (flagrhips)
//		{
//			rhips += 2.5;
//			if (rhips >= 30)flagrhips = 0;
//		}
//		else
//		{
//			rhips -= 2.5;
//			if (rhips <= 0)flagrhips = 1;
//		}
//		glutPostRedisplay();
//		//8
//		if (flaglfoot)
//		{
//			lfoot += 5;
//			if (lfoot >= 60)flaglfoot = 0;
//		}
//		else
//		{
//			lfoot -= 5;
//			if (lfoot <= -60)flaglfoot = 1;
//		}
//		glutPostRedisplay();
//		//9
//		if (flagrfoot)
//		{
//			rfoot -= 5;
//			if (rfoot <= -60)flagrfoot = 0;
//		}
//		else
//		{
//			rfoot += 5;
//			if (rfoot >= +60)flagrfoot = 1;
//		}
//		glutPostRedisplay();
//		break;
//	default:
//		break;
//	}
//}
//
//
///*void keyboard(unsigned char key, int x, int y)
//{
//	switch (key)
//	{
//	case '0':
//		angle = (angle + 5) % 360;
//		glutPostRedisplay();
//		break;
//	case '1':
//		angle = (angle - 5) % 360;
//		glutPostRedisplay();
//		bre
//		ak;
//	case '2':
//		if (yy < 8.0) {
//			yy += 0.05;
//		}
//		else {
//			yy = -8.0;
//		}
//
//		if (flaglshoulder)
//		{
//			lshoulder += 5;
//			if (lshoulder >= 60)flaglshoulder = 0;
//		}
//		else
//		{
//			lshoulder -= 5;
//			if (lshoulder <= -60)flaglshoulder = 1;
//		}
//		glutPostRedisplay();
//		//3
//		if (flagrshoulder)
//		{
//			rshoulder -= 5;
//			if (rshoulder <= -60)flagrshoulder = 0;
//		}
//		else
//		{
//			rshoulder += 5;
//			if (rshoulder >= 60)flagrshoulder = 1;
//		}
//		glutPostRedisplay();
//		//4
//		if (flaglelbow)
//		{
//			lelbow += 2.5;
//			if (lelbow >= 0)flaglelbow = 0;
//		}
//		else
//		{
//			lelbow -= 2.5;
//			if (lelbow <= -30)flaglelbow = 1;
//		}
//		glutPostRedisplay();
//		//5
//		if (flagrelbow)
//		{
//			relbow += 2.5;
//			if (relbow >= 0)flagrelbow = 0;
//		}
//		else
//		{
//			relbow -= 2.5;
//			if (relbow <= -30)flagrelbow = 1;
//		}
//		glutPostRedisplay();
//		//6
//		if (flaglhips)
//		{
//			lhips += 2.5;
//			if (lhips >= 30)flaglhips = 0;
//		}
//		else
//		{
//			lhips -= 2.5;
//			if (lhips <= 0)flaglhips = 1;
//		}
//		glutPostRedisplay();
//		//7
//		if (flagrhips)
//		{
//			rhips += 2.5;
//			if (rhips >= 30)flagrhips = 0;
//		}
//		else
//		{
//			rhips -= 2.5;
//			if (rhips <= 0)flagrhips = 1;
//		}
//		glutPostRedisplay();
//		//8
//		if (flaglfoot)
//		{
//			lfoot += 5;
//			if (lfoot >= 60)flaglfoot = 0;
//		}
//		else
//		{
//			lfoot -= 5;
//			if (lfoot <= -60)flaglfoot = 1;
//		}
//		glutPostRedisplay();
//		//9
//		if (flagrfoot)
//		{
//			rfoot -= 5;
//			if (rfoot <= -60)flagrfoot = 0;
//		}
//		else
//		{
//			rfoot += 5;
//			if (rfoot >= +60)flagrfoot = 1;
//		}
//		glutPostRedisplay();
//		break;
//
//
//	default:
//		break;
//	}
//}*/
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RED);
//	glutInitWindowSize(600, 600);
//	glutInitWindowPosition(100, 10);
//	glutCreateWindow(argv[0]);
//	init();
//	glutDisplayFunc(display);
//	glutReshapeFunc(reshape);
//
//	glutKeyboardFunc(keyboard);
//
//	glutMainLoop();
//	return 0;
//}
