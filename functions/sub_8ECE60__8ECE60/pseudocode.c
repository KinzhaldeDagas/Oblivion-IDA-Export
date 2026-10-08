char __thiscall sub_8ECE60(_DWORD *this, int a2)
{
  int v2; // ebx
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD **v5; // esi
  int v6; // ebp
  int v7; // eax
  int v9; // [esp+4h] [ebp-Ch]
  _DWORD *v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  v2 = **(_DWORD **)(*(this + 2) + 0x74); /*0x8ece6a*/
  v11 = *(_DWORD *)(*(this + 2) + 0x74); /*0x8ece6c*/
  v3 = *(this + 0x49) - 1; /*0x8ece76*/
  v10 = this; /*0x8ece77*/
  v9 = v3; /*0x8ece7b*/
  if ( v3 >= 0 ) /*0x8ece7f*/
  {
    v4 = this + 5; /*0x8ece84*/
    while ( 1 ) /*0x8ece9a*/
    {
      v5 = (_DWORD **)(*(this + 0x48) + 4 * v3); /*0x8ece9a*/
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)**v5 + 8))(**v5); /*0x8ecea8*/
      v7 = v6 + 0x20 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4); /*0x8eceb6*/
      (*(void (__cdecl **)(_DWORD *, _DWORD, int, int))(v2 + 0x14 * *(unsigned __int8 *)(v7 + v2 + 0x190) + 0x994))( /*0x8ececb*/
        v4,
        *v5,
        v11,
        a2);
      LOBYTE(v3) = *(_BYTE *)(a2 + 4); /*0x8eced2*/
      if ( (_BYTE)v3 ) /*0x8eceda*/
        break; /*0x8eceda*/
      if ( --v9 < 0 ) /*0x8ecee0*/
        break; /*0x8ecee0*/
      v3 = v9; /*0x8ece89*/
      this = v10; /*0x8ece8d*/
    }
  }
  return v3; /*0x8ecee5*/
}
