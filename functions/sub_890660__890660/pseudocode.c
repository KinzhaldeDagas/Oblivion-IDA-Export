char __thiscall sub_890660(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int HavokObject; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  _DWORD *v10; // edi
  int v11; // eax

  if ( !this ) /*0x890675*/
    return 0; /*0x890675*/
  v4 = (_DWORD *)*(this + 2); /*0x890677*/
  if ( !v4 ) /*0x89067c*/
    return 0; /*0x89067c*/
  HavokObject = bhkCollisionWrapper_GetHavokObject(v4); /*0x89067e*/
  v6 = HavokObject; /*0x890683*/
  if ( !HavokObject ) /*0x890687*/
    return 0; /*0x890687*/
  v7 = *(_DWORD *)(HavokObject + 0x14); /*0x89068b*/
  v8 = a2 ? *(_DWORD *)(a2 + 8) : 0;
  if ( v7 == v8 ) /*0x890699*/
    return 0; /*0x8906e8*/
  v9 = (_DWORD *)*(this + 2); /*0x89069b*/
  v10 = *(_DWORD **)(v6 + 8); /*0x8906a0*/
  if ( v9 ) /*0x8906a3*/
    bhkCollisionWrapper_GetPositionPtr(v9); /*0x8906a5*/
  if ( v10 ) /*0x8906ac*/
    sub_899B30(v10, (int (__stdcall ***)(signed int))v6); /*0x8906b1*/
  if ( a2 ) /*0x8906bc*/
    v11 = *(_DWORD *)(a2 + 8); /*0x8906be*/
  else
    v11 = 0; /*0x8906c3*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 8))(v6, v11); /*0x8906cd*/
  if ( v10 ) /*0x8906d1*/
    sub_899A50(v10, (int *)v6); /*0x8906d6*/
  return 1; /*0x8906dd*/
}
