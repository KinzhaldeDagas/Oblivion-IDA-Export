// Initializes the HLSL/D3DX parameter-class dispatch lookup once (observed identity mapping for supported class codes) and sets the ready flag.
signed int sub_783C70()
{
  g_D3DXParameterClassDispatch[0] = 0; /*0x783c7f*/
  unk_B428DC = 1; /*0x783c89*/
  unk_B428E0 = 2; /*0x783c8e*/
  unk_B428E4 = 3; /*0x783c98*/
  unk_B428E8 = 4; /*0x783ca2*/
  unk_B428EC = 5; /*0x783cac*/
  unk_B428F0 = 6; /*0x783cb6*/
  unk_B428F4 = 7; /*0x783cc0*/
  unk_B428F8 = 8; /*0x783cca*/
  unk_B428FC = 9; /*0x783cd4*/
  unk_B42900 = 0xA; /*0x783cde*/
  unk_B42904 = 0xB; /*0x783ce8*/
  unk_B42908 = 0xC; /*0x783cf2*/
  unk_B4290C = 0xD; /*0x783cf8*/
  unk_B4294C[0] = 0; /*0x783cfe*/
  unk_B4294D = 1; /*0x783d05*/
  unk_B4294E = 2; /*0x783d0a*/
  unk_B4294F = 3; /*0x783d11*/
  unk_B42950 = 4; /*0x783d18*/
  unk_B42951 = 5; /*0x783d1f*/
  unk_B42952 = 6; /*0x783d26*/
  unk_B42953 = 7; /*0x783d2d*/
  unk_B42954 = 8; /*0x783d34*/
  unk_B42955 = 9; /*0x783d3b*/
  unk_B42956 = 0xA; /*0x783d42*/
  unk_B42957 = 0xB; /*0x783d49*/
  unk_B42958 = 0xC; /*0x783d50*/
  unk_B42959 = 0xD; /*0x783d56*/
  g_D3DXParameterDispatchInitialized = 1; /*0x783d5c*/
  return 1; /*0x783d61*/
}
