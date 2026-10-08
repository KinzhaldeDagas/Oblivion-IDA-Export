void __thiscall sub_88F880(_WORD *this, signed int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  NiRTTI *v5; // eax
  char v6; // al
  double v8; // st6
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // edi
  NiAVObject *PointerAtOffset08; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // [esp+Ch] [ebp+4h]
  float v21; // [esp+10h] [ebp+8h]
  float v22; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x88f882*/
  if ( a3 )
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*a3 + 4))(a3); /*0x88f893*/
    if ( v5 ) /*0x88f897*/
    {
      while ( v5 != &stru_BA7D84 ) /*0x88f8a5*/
      {
        v5 = v5->parent; /*0x88f8a7*/
        if ( !v5 ) /*0x88f8ac*/
          goto LABEL_5; /*0x88f8ac*/
      }
      v6 = 1; /*0x88f8cc*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x88f8ae*/
    }
    v3 = v6 != 0 ? a3 : 0;
  }
  if ( a2 >= 6 ) /*0x88f8c2*/
    v21 = 1.0; /*0x88f8d0*/
  else
    v21 = 0.0; /*0x88f8c6*/
  v8 = v21; /*0x88f8d6*/
  v20 = v21; /*0x88f8da*/
  if ( v3 || (v3 = *((_DWORD **)this + 4)) != 0 ) /*0x88f8e5*/
  {
    v9 = v3[2]; /*0x88f8eb*/
    if ( v9 && (v10 = v9 + 0x14) != 0 ) /*0x88f8f5*/
      v11 = *(_DWORD *)(v10 + 0x1C); /*0x88f8f7*/
    else
      v11 = 0; /*0x88f8fc*/
    if ( (v11 & 0x3F) == 8 ) /*0x88f906*/
    {
      v12 = (v11 >> 8) & 0x1F; /*0x88f912*/
      v22 = *(float *)(8 * v12 + 0xB2E660); /*0x88f91b*/
      if ( v22 <= 1.0 ) /*0x88f92a*/
      {
        v20 = *(float *)(8 * v12 + 0xB2E664) * v8; /*0x88f945*/
        v21 = v22 * v8; /*0x88f94b*/
      }
      else
      {
        v21 = 1.0; /*0x88f930*/
        v20 = 1.0; /*0x88f934*/
      }
      *(this + 6) &= ~0x200u; /*0x88f94f*/
      if ( a2 < 6 ) /*0x88f958*/
      {
        v13 = v3[2]; /*0x88f95b*/
        if ( v13 ) /*0x88f960*/
        {
          bhkRefObject_UpdateHavokObject(v3); /*0x88f964*/
          sub_8A6410(v13); /*0x88f96b*/
          bhkRefObject_UpdateHavokObject(v3); /*0x88f972*/
        }
        PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)this); /*0x88f979*/
        if ( PointerAtOffset08 ) /*0x88f981*/
        {
          v15 = sub_700010(PointerAtOffset08, (int)&MEMORY[0xBA7F3C]); /*0x88f98a*/
          if ( v15 ) /*0x88f991*/
            *((_WORD *)v15 + 4) &= ~8u; /*0x88f993*/
        }
      }
    }
    else if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, signed int))(*v3 + 0x9C))(v3, a2) && a2 < 6 ) /*0x88f9b3*/
    {
      v21 = 1.0; /*0x88f9b7*/
      v20 = 1.0; /*0x88f9bb*/
    }
  }
  if ( *((_DWORD *)this + 7) != a2 && (*(_BYTE *)(this + 6) & 0x40) == 0 ) /*0x88f9d4*/
    sub_88EB20((int)this); /*0x88f9d8*/
  *((float *)this + 6) = v20; /*0x88f9e3*/
  *((float *)this + 5) = v21; /*0x88f9ea*/
  sub_88F040(this); /*0x88f9ed*/
  v16 = *((_DWORD **)this + 4); /*0x88f9f2*/
  if ( v16 ) /*0x88f9f7*/
  {
    v17 = v16[2]; /*0x88f9f9*/
    if ( v17 && (v18 = v17 + 0x14) != 0 ) /*0x88fa03*/
      v19 = *(_DWORD *)(v18 + 0x1C); /*0x88fa05*/
    else
      LOBYTE(v19) = 0; /*0x88fa0a*/
    if ( (v19 & 0x3F) == 8 ) /*0x88fa10*/
    {
      if ( *((_DWORD *)this + 8) ) /*0x88fa12*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v16 + 0x5C))(v16, *((_DWORD *)this + 8)); /*0x88fa1f*/
    }
  }
}
