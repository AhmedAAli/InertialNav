t2 = q0*q1*2.0;
t3 = q2*q3*2.0;
t4 = t2+t3;
t5 = pd-ptd;
t6 = 1.0/t5;
t7 = q0*q0;
t8 = q1*q1;
t9 = q2*q2;
t10 = q3*q3;
t11 = t7-t8-t9+t10;
t12 = q0*q2*2.0;
t13 = q1*q3*2.0;
t14 = q0*q3*2.0;
t15 = t7-t8+t9-t10;
t16 = t15*ve;
t17 = t4*vd;
t18 = q1*q2*2.0;
t19 = t12-t13;
t20 = t14-t18;
t22 = t20*vn;
t21 = t16+t17-t22;
t23 = t11*vd;
t24 = t2-t3;
t25 = t12+t13;
t26 = t25*vn;
t29 = t24*ve;
t27 = t23+t26-t29;
t28 = t4*t6*t21;
t37 = t6*t11*t27;
t30 = t28-t37;
t31 = t7+t8-t9-t10;
t32 = t31*vn;
t33 = t14+t18;
t34 = t33*ve;
t38 = t19*vd;
t35 = t32+t34-t38;
t36 = 1.0/(t5*t5);
t39 = P[1][1]*t6*t19*t21;
t40 = P[0][0]*t30;
t41 = P[2][0]*t6*t11*t35;
t42 = P[8][0]*t11*t21*t36;
t43 = P[1][0]*t6*t19*t21;
t44 = P[3][0]*t6*t11*t20;
t88 = P[4][0]*t6*t11*t15;
t89 = P[5][0]*t4*t6*t11;
t45 = t40+t41+t42+t43+t44-t88-t89;
t46 = t30*t45;
t47 = P[0][3]*t30;
t48 = P[2][3]*t6*t11*t35;
t49 = P[8][3]*t11*t21*t36;
t50 = P[1][3]*t6*t19*t21;
t51 = P[3][3]*t6*t11*t20;
t90 = P[4][3]*t6*t11*t15;
t91 = P[5][3]*t4*t6*t11;
t52 = t47+t48+t49+t50+t51-t90-t91;
t53 = t6*t11*t20*t52;
t54 = P[0][5]*t30;
t55 = P[2][5]*t6*t11*t35;
t56 = P[8][5]*t11*t21*t36;
t57 = P[1][5]*t6*t19*t21;
t58 = P[3][5]*t6*t11*t20;
t92 = P[4][5]*t6*t11*t15;
t93 = P[5][5]*t4*t6*t11;
t59 = t54+t55+t56+t57+t58-t92-t93;
t60 = P[0][2]*t30;
t61 = P[2][2]*t6*t11*t35;
t62 = P[8][2]*t11*t21*t36;
t63 = P[1][2]*t6*t19*t21;
t64 = P[3][2]*t6*t11*t20;
t95 = P[4][2]*t6*t11*t15;
t96 = P[5][2]*t4*t6*t11;
t65 = t60+t61+t62+t63+t64-t95-t96;
t66 = t6*t11*t35*t65;
t67 = P[0][8]*t30;
t68 = P[2][8]*t6*t11*t35;
t69 = P[8][8]*t11*t21*t36;
t70 = P[1][8]*t6*t19*t21;
t71 = P[3][8]*t6*t11*t20;
t97 = P[4][8]*t6*t11*t15;
t98 = P[5][8]*t4*t6*t11;
t72 = t67+t68+t69+t70+t71-t97-t98;
t73 = t11*t21*t36*t72;
t74 = P[0][4]*t30;
t75 = P[2][4]*t6*t11*t35;
t76 = P[8][4]*t11*t21*t36;
t77 = P[1][4]*t6*t19*t21;
t78 = P[3][4]*t6*t11*t20;
t99 = P[4][4]*t6*t11*t15;
t100 = P[5][4]*t4*t6*t11;
t79 = t74+t75+t76+t77+t78-t99-t100;
t80 = P[0][1]*t30;
t81 = P[2][1]*t6*t11*t35;
t82 = P[8][1]*t11*t21*t36;
t83 = P[3][1]*t6*t11*t20;
t102 = P[4][1]*t6*t11*t15;
t103 = P[5][1]*t4*t6*t11;
t84 = t39+t80+t81+t82+t83-t102-t103;
t85 = t6*t19*t21*t84;
t94 = t4*t6*t11*t59;
t101 = t6*t11*t15*t79;
t86 = R_LOS+t46+t53+t66+t73+t85-t94-t101;
t87 = 1.0/t86;
A0[0][0] = t87*(P[0][0]*(t4*t6*(t16+t17-vn*(t14-q1*q2*2.0))-t6*t11*t27)-P[0][5]*t4*t6*t11-P[0][4]*t6*t11*t15+P[0][3]*t6*t11*t20+P[0][1]*t6*t19*t21+P[0][2]*t6*t11*t35+P[0][8]*t11*t21*t36);
A0[1][0] = t87*(t39+P[1][0]*t30-P[1][5]*t4*t6*t11-P[1][4]*t6*t11*t15+P[1][3]*t6*t11*t20+P[1][2]*t6*t11*t35+P[1][8]*t11*t21*t36);
A0[2][0] = t87*(t61+P[2][0]*t30-P[2][5]*t4*t6*t11-P[2][4]*t6*t11*t15+P[2][3]*t6*t11*t20+P[2][1]*t6*t19*t21+P[2][8]*t11*t21*t36);
A0[3][0] = t87*(t51+P[3][0]*t30-P[3][5]*t4*t6*t11-P[3][4]*t6*t11*t15+P[3][1]*t6*t19*t21+P[3][2]*t6*t11*t35+P[3][8]*t11*t21*t36);
A0[4][0] = t87*(-t99+P[4][0]*t30-P[4][5]*t4*t6*t11+P[4][3]*t6*t11*t20+P[4][1]*t6*t19*t21+P[4][2]*t6*t11*t35+P[4][8]*t11*t21*t36);
A0[5][0] = t87*(-t93+P[5][0]*t30-P[5][4]*t6*t11*t15+P[5][3]*t6*t11*t20+P[5][1]*t6*t19*t21+P[5][2]*t6*t11*t35+P[5][8]*t11*t21*t36);
A0[6][0] = t87*(P[6][0]*t30-P[6][5]*t4*t6*t11-P[6][4]*t6*t11*t15+P[6][3]*t6*t11*t20+P[6][1]*t6*t19*t21+P[6][2]*t6*t11*t35+P[6][8]*t11*t21*t36);
A0[7][0] = t87*(P[7][0]*t30-P[7][5]*t4*t6*t11-P[7][4]*t6*t11*t15+P[7][3]*t6*t11*t20+P[7][1]*t6*t19*t21+P[7][2]*t6*t11*t35+P[7][8]*t11*t21*t36);
A0[8][0] = t87*(t69+P[8][0]*t30-P[8][5]*t4*t6*t11-P[8][4]*t6*t11*t15+P[8][3]*t6*t11*t20+P[8][1]*t6*t19*t21+P[8][2]*t6*t11*t35);
A0[9][0] = t87*(P[9][0]*t30-P[9][5]*t4*t6*t11-P[9][4]*t6*t11*t15+P[9][3]*t6*t11*t20+P[9][1]*t6*t19*t21+P[9][2]*t6*t11*t35+P[9][8]*t11*t21*t36);
A0[10][0] = t87*(P[10][0]*t30-P[10][5]*t4*t6*t11-P[10][4]*t6*t11*t15+P[10][3]*t6*t11*t20+P[10][1]*t6*t19*t21+P[10][2]*t6*t11*t35+P[10][8]*t11*t21*t36);
A0[11][0] = t87*(P[11][0]*t30-P[11][5]*t4*t6*t11-P[11][4]*t6*t11*t15+P[11][3]*t6*t11*t20+P[11][1]*t6*t19*t21+P[11][2]*t6*t11*t35+P[11][8]*t11*t21*t36);
A0[12][0] = t87*(P[12][0]*t30-P[12][5]*t4*t6*t11-P[12][4]*t6*t11*t15+P[12][3]*t6*t11*t20+P[12][1]*t6*t19*t21+P[12][2]*t6*t11*t35+P[12][8]*t11*t21*t36);
A0[13][0] = t87*(P[13][0]*t30-P[13][5]*t4*t6*t11-P[13][4]*t6*t11*t15+P[13][3]*t6*t11*t20+P[13][1]*t6*t19*t21+P[13][2]*t6*t11*t35+P[13][8]*t11*t21*t36);
A0[14][0] = t87*(P[14][0]*t30-P[14][5]*t4*t6*t11-P[14][4]*t6*t11*t15+P[14][3]*t6*t11*t20+P[14][1]*t6*t19*t21+P[14][2]*t6*t11*t35+P[14][8]*t11*t21*t36);
A0[15][0] = t87*(P[15][0]*t30-P[15][5]*t4*t6*t11-P[15][4]*t6*t11*t15+P[15][3]*t6*t11*t20+P[15][1]*t6*t19*t21+P[15][2]*t6*t11*t35+P[15][8]*t11*t21*t36);
A0[16][0] = t87*(P[16][0]*t30-P[16][5]*t4*t6*t11-P[16][4]*t6*t11*t15+P[16][3]*t6*t11*t20+P[16][1]*t6*t19*t21+P[16][2]*t6*t11*t35+P[16][8]*t11*t21*t36);
A0[17][0] = t87*(P[17][0]*t30-P[17][5]*t4*t6*t11-P[17][4]*t6*t11*t15+P[17][3]*t6*t11*t20+P[17][1]*t6*t19*t21+P[17][2]*t6*t11*t35+P[17][8]*t11*t21*t36);
A0[18][0] = t87*(P[18][0]*t30-P[18][5]*t4*t6*t11-P[18][4]*t6*t11*t15+P[18][3]*t6*t11*t20+P[18][1]*t6*t19*t21+P[18][2]*t6*t11*t35+P[18][8]*t11*t21*t36);
A0[19][0] = t87*(P[19][0]*t30-P[19][5]*t4*t6*t11-P[19][4]*t6*t11*t15+P[19][3]*t6*t11*t20+P[19][1]*t6*t19*t21+P[19][2]*t6*t11*t35+P[19][8]*t11*t21*t36);
A0[20][0] = t87*(P[20][0]*t30-P[20][5]*t4*t6*t11-P[20][4]*t6*t11*t15+P[20][3]*t6*t11*t20+P[20][1]*t6*t19*t21+P[20][2]*t6*t11*t35+P[20][8]*t11*t21*t36);
A0[21][0] = t87*(P[21][0]*t30-P[21][5]*t4*t6*t11-P[21][4]*t6*t11*t15+P[21][3]*t6*t11*t20+P[21][1]*t6*t19*t21+P[21][2]*t6*t11*t35+P[21][8]*t11*t21*t36);
A0[22][0] = t87*(P[22][0]*t30-P[22][5]*t4*t6*t11-P[22][4]*t6*t11*t15+P[22][3]*t6*t11*t20+P[22][1]*t6*t19*t21+P[22][2]*t6*t11*t35+P[22][8]*t11*t21*t36);
A0[23][0] = t87*(P[23][0]*t30-P[23][5]*t4*t6*t11-P[23][4]*t6*t11*t15+P[23][3]*t6*t11*t20+P[23][1]*t6*t19*t21+P[23][2]*t6*t11*t35+P[23][8]*t11*t21*t36);
