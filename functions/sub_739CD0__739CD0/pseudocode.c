unsigned int __thiscall sub_739CD0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // ebp
  void (__cdecl *v4)(unsigned int, NiPropertyState **, int, int *, int); // edx
  NiPropertyState **p_propertyState; // edi
  NiDynamicEffectState *v6; // eax
  int v7; // ebx
  bool v8; // zf
  void (__cdecl *v9)(unsigned int, unsigned int **, int, int *, int); // eax
  int v10; // eax
  int v11; // ebx
  void (__cdecl *v12)(unsigned int, bool *, int, int *, int); // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  unsigned __int16 v17; // bx
  unsigned int v19; // [esp-14h] [ebp-2Ch]
  unsigned int v20; // [esp-14h] [ebp-2Ch]
  unsigned int v21; // [esp-14h] [ebp-2Ch]
  bool v22; // [esp+13h] [ebp-5h] BYREF
  int v23; // [esp+14h] [ebp-4h] BYREF

  v2 = a2; /*0x739cd5*/
  sub_7008A0(this, (signed int)a2); /*0x739cde*/
  v4 = *(void (__cdecl **)(unsigned int, NiPropertyState **, int, int *, int))(v2[0x87] + 4); /*0x739ce9*/
  p_propertyState = &this->members.propertyState; /*0x739cf5*/
  v19 = v2[0x87]; /*0x739cf9*/
  v23 = 2; /*0x739cfa*/
  v4(v19, &this->members.propertyState, 2, &v23, 1); /*0x739d02*/
  v6 = (NiDynamicEffectState *)FormHeapAlloc(
                                 (0xC * (unsigned __int64)*(unsigned __int16 *)p_propertyState) >> 0x20 != 0
                               ? 0xFFFFFFFF
                               : 0xC * *(unsigned __int16 *)p_propertyState);
  v7 = 0; /*0x739d1d*/
  v8 = LOWORD(this->members.propertyState) == 0; /*0x739d22*/
  this->members.dynamicEffectState = v6; /*0x739d25*/
  if ( !v8 ) /*0x739d28*/
  {
    do /*0x739d48*/
      sub_709430((char *)this->members.dynamicEffectState + 0xC * (unsigned __int16)v7++, (signed int)v2); /*0x739d3d*/
    while ( (unsigned __int16)v7 < *(_WORD *)p_propertyState ); /*0x739d48*/
  }
  v20 = v2[0x87]; /*0x739d69*/
  v9 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v20 + 4); /*0x739d6a*/
  if ( v2[0x36] >= 0x4010000 ) /*0x739d5c*/
  {
    v23 = 1; /*0x739d94*/
    v9(v20, &a2, 1, &v23, 1); /*0x739d9c*/
  }
  else
  {
    v23 = 4; /*0x739d6d*/
    v9(v20, (unsigned int **)this->members.pad014, 4, &v23, 1); /*0x739d75*/
    LOBYTE(a2) = this->members.pad014[0] != 0; /*0x739d7d*/
  }
  if ( (_BYTE)a2 )
  {
    v10 = FormHeapAlloc(
            (unsigned __int64)*(unsigned __int16 *)p_propertyState >> 0x1D != 0
          ? 0xFFFFFFFF
          : 8 * *(unsigned __int16 *)p_propertyState);
    v11 = 0; /*0x739dc1*/
    v8 = *(_WORD *)p_propertyState == 0; /*0x739dc6*/
    this->members.pad014[0] = v10; /*0x739dc9*/
    if ( !v8 ) /*0x739dcc*/
    {
      do /*0x739de5*/
        sub_714BA0((char *)(this->members.pad014[0] + 8 * (unsigned __int16)v11++), (signed int)v2); /*0x739dda*/
      while ( (unsigned __int16)v11 < *(_WORD *)p_propertyState ); /*0x739de5*/
    }
  }
  v21 = v2[0x87]; /*0x739e06*/
  v12 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v21 + 4); /*0x739e07*/
  if ( v2[0x36] >= 0x4010000 ) /*0x739df9*/
  {
    v23 = 1; /*0x739e31*/
    v12(v21, &v22, 1, &v23, 1); /*0x739e39*/
  }
  else
  {
    v23 = 4; /*0x739e0a*/
    v12(v21, (bool *)&this->members.pad014[1], 4, &v23, 1); /*0x739e12*/
    v22 = this->members.pad014[1] != 0; /*0x739e1a*/
  }
  if ( v22 )
  {
    v13 = *(unsigned __int16 *)p_propertyState; /*0x739e45*/
    v14 = FormHeapAlloc((unsigned __int64)*(unsigned __int16 *)p_propertyState >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v13);
    if ( v14 ) /*0x739e65*/
    {
      v15 = v13 - 1; /*0x739e67*/
      if ( v13 - 1 >= 0 ) /*0x739e6c*/
      {
        v16 = v14 + 8; /*0x739e70*/
        do /*0x739e85*/
        {
          *(float *)(v16 - 8) = 0.0; /*0x739e73*/
          v16 += 0x10; /*0x739e76*/
          --v15; /*0x739e79*/
          *(float *)(v16 - 0x14) = 0.0; /*0x739e7c*/
          *(float *)(v16 - 0x10) = 0.0; /*0x739e7f*/
          *(float *)(v16 - 0xC) = 0.0; /*0x739e82*/
        }
        while ( v15 >= 0 ); /*0x739e85*/
      }
    }
    else
    {
      v14 = 0; /*0x739e8b*/
    }
    v17 = 0; /*0x739e8d*/
    v8 = *(_WORD *)p_propertyState == 0; /*0x739e8f*/
    this->members.pad014[1] = v14; /*0x739e92*/
    if ( !v8 ) /*0x739e95*/
    {
      do /*0x739eac*/
        sub_715420((char *)(this->members.pad014[1] + 0x10 * v17++), (signed int)v2); /*0x739ea1*/
      while ( v17 < *(_WORD *)p_propertyState ); /*0x739eac*/
    }
  }
  return sub_712AE0(v2); /*0x739eb5*/
}
