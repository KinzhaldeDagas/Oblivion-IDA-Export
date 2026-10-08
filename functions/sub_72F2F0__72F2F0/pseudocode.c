void __thiscall sub_72F2F0(_DWORD *this, int a2)
{
  int v3; // eax
  float *v4; // esi
  bool v5; // zf
  int v6; // edi
  int v7; // ecx
  unsigned int v8; // ebx
  float *v9; // esi
  int v10; // eax
  float *v11; // ecx
  unsigned int v12; // edx
  bool v13; // cf
  int v14; // [esp+14h] [ebp-1Ch]
  float *v15; // [esp+18h] [ebp-18h] BYREF
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+2Ch] [ebp-4h]

  v3 = 0; /*0x72f319*/
  v4 = 0; /*0x72f31b*/
  v15 = 0; /*0x72f31d*/
  v16 = 0; /*0x72f321*/
  v17 = 0; /*0x72f325*/
  v5 = *(this + 0x10) == 0; /*0x72f329*/
  v18 = 0; /*0x72f32c*/
  v14 = 0; /*0x72f330*/
  if ( !v5 ) /*0x72f334*/
  {
    v6 = 0; /*0x72f33a*/
    do /*0x72f3ed*/
    {
      v7 = *(this + 0x11); /*0x72f340*/
      v8 = 0; /*0x72f343*/
      if ( *(_WORD *)(v6 + v7 + 0x48) ) /*0x72f345*/
      {
        do /*0x72f3b2*/
        {
          v9 = (float *)(a2 + 0xC * *(unsigned __int16 *)(*(_DWORD *)(v6 + v7 + 0x44) + 8 * v8)); /*0x72f35f*/
          if ( v3 == v16 ) /*0x72f368*/
          {
            v10 = 2 * v16; /*0x72f36c*/
            if ( !v16 ) /*0x72f36f*/
              v10 = 1; /*0x72f371*/
            sub_72F0F0((unsigned int *)&v15, v10); /*0x72f37b*/
            v3 = v17; /*0x72f380*/
          }
          v11 = &v15[3 * v3]; /*0x72f38b*/
          *v11 = *v9; /*0x72f390*/
          v11[1] = v9[1]; /*0x72f395*/
          v11[2] = v9[2]; /*0x72f39b*/
          v7 = *(this + 0x11); /*0x72f39e*/
          v12 = *(unsigned __int16 *)(v6 + v7 + 0x48); /*0x72f3a1*/
          ++v3; /*0x72f3a6*/
          ++v8; /*0x72f3a9*/
          v17 = v3; /*0x72f3ae*/
        }
        while ( v8 < v12 ); /*0x72f3b2*/
        v4 = v15; /*0x72f3b4*/
      }
      NiSphere_ComputeFromVertices((float *)(v6 + *(this + 0x11) + 0x34), v3, v4); /*0x72f3c1*/
      NiBound_TransformInto( /*0x72f3d1*/
        (float *)(v6 + *(this + 0x11) + 0x34),
        (NiPoint3 *)(v6 + *(this + 0x11) + 0x34),
        (NiTransform *)(v6 + *(this + 0x11)));
      v3 = 0; /*0x72f3dd*/
      v6 += 0x4C; /*0x72f3df*/
      v13 = (unsigned int)(v14 + 1) < *(this + 0x10); /*0x72f3e2*/
      v17 = 0; /*0x72f3e5*/
      ++v14; /*0x72f3e9*/
    }
    while ( v13 ); /*0x72f3ed*/
  }
  FormHeapFree((unsigned int)v4); /*0x72f3f4*/
}
