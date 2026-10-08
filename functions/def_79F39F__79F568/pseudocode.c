// Malformed nested frond-texture token edge. Hex-Rays renders this shared exception path as JUMPOUT; it is not an unresolved vector-control-flow edge and does not alter the normal token 14001 termination path.
void __usercall __noreturn def_79F39F(
        int a1@<eax>,
        bool a2@<bl>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        OB_IdvFileError_010201A0 a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        OB_stString28_010201A0 result,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47)
{
  OB_stString28_010201A0 *v48; // eax

  v48 = OB_IdvFormatString_010201A0(&result, "malformed frond texture information (token %d)", a1); /*0x79f575*/
  LOBYTE(STACK[0x118]) = 3; /*0x79f583*/
  OB_IdvFileError_Ctor_010201A0(&a24, v48, a2); /*0x79f58b*/
  ThrowException__((DWORD)&a24, &_TI3_AVIdvFileError__); /*0x79f59a*/
}
