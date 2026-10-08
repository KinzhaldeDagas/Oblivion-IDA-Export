signed int __thiscall sub_4DE660(char *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  NiObject *v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // esi
  char v8; // al
  int v9; // edi
  char v10; // al
  int v11; // eax
  int v13; // [esp+8h] [ebp-4h] BYREF

  if ( !(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) /*0x4de689*/
    || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) != 0x18 )
  {
    return 0; /*0x4de75d*/
  }
  v2 = ExtraDataList_TestActionFlagBits((ExtraDataList *)(this + 0x44), 4u) ? 1 : 3;
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x154))(this) /*0x4de6c2*/
    && (v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x154))(this), *(_WORD *)(v3 + 0xB6)) )
  {
    v4 = **(_DWORD **)(v3 + 0xB0); /*0x4de6d1*/
  }
  else
  {
    v4 = 0; /*0x4de6d5*/
  }
  if ( v4 ) /*0x4de6d9*/
    v5 = *(NiObject **)(v4 + 0xC); /*0x4de6db*/
  else
    v5 = 0; /*0x4de6e0*/
  v6 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, v5); /*0x4de6e8*/
  if ( !v6 ) /*0x4de6f2*/
    return v2; /*0x4de6f2*/
  v7 = v6 + 0xB; /*0x4de6f9*/
  v8 = NiTMap_GetAt(&v6[0xB].__vftable, (int)"Open", &v13); /*0x4de703*/
  v9 = v8 != 0 ? v13 : 0;
  v10 = NiTMap_GetAt(v7, (int)"Close", &v13); /*0x4de71e*/
  v11 = v10 != 0 ? v13 : 0;
  if ( !v9 || !v11 ) /*0x4de731*/
    return v2; /*0x4de731*/
  if ( *(_DWORD *)(v9 + 0x44) == 1 ) /*0x4de73b*/
    return 2; /*0x4de746*/
  if ( *(_DWORD *)(v11 + 0x44) == 1 ) /*0x4de74a*/
    return 4; /*0x4de74e*/
  else
    return v2; /*0x4de756*/
}
