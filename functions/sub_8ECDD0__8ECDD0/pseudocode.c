int *__thiscall sub_8ECDD0(_DWORD *this, int a2)
{
  int *result; // eax
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // ebp
  _DWORD **v6; // esi
  int v7; // eax
  _DWORD *v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  int *v10; // [esp+10h] [ebp-4h]

  result = *(int **)(*(this + 2) + 0x74);
  v3 = *result;
  v4 = *(this + 0x49) - 1;
  v8 = this;
  v10 = result;
  if ( v4 >= 0 )
  {
    v5 = this + 5;
    while ( 1 )
    {
      v6 = (_DWORD **)(*(this + 0x48) + 4 * v4);
      v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)**v6 + 8))(**v6);
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
      result = (int *)(*(int (__cdecl **)(_DWORD *, _DWORD, int *, int))(v3
                                                                       + 0x14
                                                                       * *(unsigned __int8 *)(v9 + 0x20 * v7 + v3 + 0x190)
                                                                       + 0x998))(
                        v5,
                        *v6,
                        v10,
                        a2);
      if ( --v4 < 0 )
        break;
      this = v8;
    }
  }
  return result;
}
