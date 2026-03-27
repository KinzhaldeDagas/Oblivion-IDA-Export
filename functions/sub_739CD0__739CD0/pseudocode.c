unsigned int __thiscall sub_739CD0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // ebp
  void (__cdecl *v4)(unsigned int, NiPropertyState **, int, int *, int); // edx
  int *p_propertyState; // edi
  int v6; // eax
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

  v2 = a2;
  sub_7008A0(this, (signed int)a2);
  v4 = *(void (__cdecl **)(unsigned int, NiPropertyState **, int, int *, int))(v2[0x87] + 4);
  p_propertyState = (int *)&this->members.propertyState;
  v19 = v2[0x87];
  v23 = 2;
  v4(v19, &this->members.propertyState, 2, &v23, 1);
  v6 = FormHeapAlloc(
         (0xC * (unsigned __int64)*(unsigned __int16 *)p_propertyState) >> 0x20 != 0
       ? 0xFFFFFFFF
       : 0xC * *(unsigned __int16 *)p_propertyState);
  v7 = 0;
  v8 = LOWORD(this->members.propertyState) == 0;
  this->members.dynamicEffectState = (NiDynamicEffectState *)v6;
  if ( !v8 )
  {
    do
      sub_709430((char *)this->members.dynamicEffectState + 0xC * (unsigned __int16)v7++, (signed int)v2);
    while ( (unsigned __int16)v7 < *(_WORD *)p_propertyState );
  }
  v20 = v2[0x87];
  v9 = *(void (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v20 + 4);
  if ( v2[0x36] >= 0x4010000 )
  {
    v23 = 1;
    v9(v20, &a2, 1, &v23, 1);
  }
  else
  {
    v23 = 4;
    v9(v20, (unsigned int **)this->members.pad014, 4, &v23, 1);
    LOBYTE(a2) = this->members.pad014[0] != 0;
  }
  if ( (_BYTE)a2 )
  {
    v10 = FormHeapAlloc(
            (unsigned __int64)*(unsigned __int16 *)p_propertyState >> 0x1D != 0
          ? 0xFFFFFFFF
          : 8 * *(unsigned __int16 *)p_propertyState);
    v11 = 0;
    v8 = *(_WORD *)p_propertyState == 0;
    this->members.pad014[0] = v10;
    if ( !v8 )
    {
      do
        sub_714BA0((char *)(this->members.pad014[0] + 8 * (unsigned __int16)v11++), (signed int)v2);
      while ( (unsigned __int16)v11 < *(_WORD *)p_propertyState );
    }
  }
  v21 = v2[0x87];
  v12 = *(void (__cdecl **)(unsigned int, bool *, int, int *, int))(v21 + 4);
  if ( v2[0x36] >= 0x4010000 )
  {
    v23 = 1;
    v12(v21, &v22, 1, &v23, 1);
  }
  else
  {
    v23 = 4;
    v12(v21, (bool *)&this->members.pad014[1], 4, &v23, 1);
    v22 = this->members.pad014[1] != 0;
  }
  if ( v22 )
  {
    v13 = *(unsigned __int16 *)p_propertyState;
    v14 = FormHeapAlloc((unsigned __int64)*(unsigned __int16 *)p_propertyState >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v13);
    if ( v14 )
    {
      v15 = v13 - 1;
      if ( v13 - 1 >= 0 )
      {
        v16 = v14 + 8;
        do
        {
          *(float *)(v16 - 8) = 0.0;
          v16 += 0x10;
          --v15;
          *(float *)(v16 - 0x14) = 0.0;
          *(float *)(v16 - 0x10) = 0.0;
          *(float *)(v16 - 0xC) = 0.0;
        }
        while ( v15 >= 0 );
      }
    }
    else
    {
      v14 = 0;
    }
    v17 = 0;
    v8 = *(_WORD *)p_propertyState == 0;
    this->members.pad014[1] = v14;
    if ( !v8 )
    {
      do
        sub_715420((char *)(this->members.pad014[1] + 0x10 * v17++), (signed int)v2);
      while ( v17 < *(_WORD *)p_propertyState );
    }
  }
  return sub_712AE0(v2);
}
