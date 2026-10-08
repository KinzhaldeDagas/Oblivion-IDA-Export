// Receiver eligibility: test geometry bound against active projector planes when +0x14C is present, otherwise source-to-bound surface range.
char __thiscall sub_7D2EA0(char *this, float *a2, float *a3)
{
  bool v6; // zf
  float v7; // edx
  float v8; // ecx
  float v9; // edx
  unsigned int v10; // edi
  NiFrustumPlanes *v11; // ebp
  signed int v12; // eax
  float v13; // [esp+8h] [ebp-1Ch]
  float v14; // [esp+Ch] [ebp-18h]
  float v15; // [esp+10h] [ebp-14h]
  NiBound v16; // [esp+14h] [ebp-10h] BYREF
  float v17; // [esp+28h] [ebp+4h]
  float v18; // [esp+28h] [ebp+4h]
  float v19; // [esp+28h] [ebp+4h]
  char v20; // [esp+2Ch] [ebp+8h]

  if ( !a3 ) /*0x7d2ead*/
    return 0; /*0x7d2eb0*/
  if ( (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 4))(a3) == &MEMORY[0xB3F9B0][0xD3] ) /*0x7d2ec7*/
    return 1; /*0x7d2eca*/
  v6 = *((_DWORD *)this + 0x53) == 0; /*0x7d2ed3*/
  v7 = a2[9]; /*0x7d2ee1*/
  v16.Center.x = a2[8]; /*0x7d2ee4*/
  v8 = a2[0xA]; /*0x7d2ee8*/
  v16.Center.y = v7; /*0x7d2eeb*/
  v9 = a2[0xB]; /*0x7d2eef*/
  v20 = 1; /*0x7d2ef2*/
  v16.Center.z = v8; /*0x7d2ef7*/
  v16.Radius = v9; /*0x7d2efb*/
  if ( v6 ) /*0x7d2eff*/
  {
    v13 = a3[0x22] - v16.Center.x; /*0x7d2f67*/
    v14 = a3[0x23] - v16.Center.y; /*0x7d2f75*/
    v15 = a3[0x24] - v16.Center.z; /*0x7d2f83*/
    v17 = v14 * v14 + v13 * v13 + v15 * v15; /*0x7d2fa3*/
    v18 = sqrt(v17); /*0x7d2fb0*/
    v19 = v18 - v16.Radius; /*0x7d2fc1*/
    return a3[0x3E] > (double)v19; /*0x7d2fdd*/
  }
  else
  {
    v10 = 0; /*0x7d2f03*/
    v11 = (NiFrustumPlanes *)(this + 0x150); /*0x7d2f05*/
    do /*0x7d2f4d*/
    {
      if ( ((1 << v10) & *((_DWORD *)this + 0x6C)) != 0 ) /*0x7d2f1f*/
      {
        v12 = NiBound_ClassifyAgainstPlane(&v16, v11); /*0x7d2f26*/
        if ( v12 == 2 ) /*0x7d2f2e*/
        {
          v20 = 0; /*0x7d2f30*/
        }
        else if ( v12 == 1 ) /*0x7d2f3a*/
        {
          *((_DWORD *)this + 0x6C) &= ~(1 << v10); /*0x7d2f3e*/
        }
      }
      ++v10; /*0x7d2f44*/
      v11 = (NiFrustumPlanes *)((char *)v11 + 0x10); /*0x7d2f47*/
    }
    while ( v10 < 6 ); /*0x7d2f4d*/
    return v20; /*0x7d2f4f*/
  }
}
