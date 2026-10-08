char __thiscall sub_65A310(Actor *this, char a2)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v3; // esi
  _BYTE *v4; // ecx
  _DWORD *v5; // ecx
  int v6; // edi
  int HavokObject; // eax
  int v8; // eax
  bool v10; // [esp+4h] [ebp+4h]

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x65a310*/
  if ( CharProxy ) /*0x65a317*/
  {
    v10 = a2 == 0; /*0x65a321*/
    v3 = CharProxy; /*0x8927e1*/
    v4 = *((_BYTE **)CharProxy + 0xDA); /*0x8927e3*/
    if ( v4 ) /*0x8927eb*/
    {
      LOBYTE(CharProxy) = v10; /*0x8927f1*/
      if ( v10 != (v4[0x68] == 0) ) /*0x8927fa*/
      {
        if ( v10 ) /*0x8927fe*/
        {
          sub_88D560((int)v4, 0); /*0x892803*/
          v5 = *((_DWORD **)v3 + 2); /*0x892808*/
          v6 = *((_DWORD *)v3 + 0xDA); /*0x89280d*/
          if ( v5 ) /*0x892813*/
            HavokObject = bhkCollisionWrapper_GetHavokObject(v5); /*0x892815*/
          else
            HavokObject = 0; /*0x89281c*/
          v8 = *(_DWORD *)(HavokObject + 8); /*0x89281e*/
          if ( v8 ) /*0x892823*/
            LOBYTE(CharProxy) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x5C))(v6, *(_DWORD *)(v8 + 0x2B0)); /*0x892833*/
          else
            LOBYTE(CharProxy) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x5C))(v6, 0); /*0x892844*/
        }
        else
        {
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 0x60))(v4); /*0x892850*/
          LOBYTE(CharProxy) = sub_88D560(*((_DWORD *)v3 + 0xDA), 1); /*0x89285a*/
        }
      }
    }
  }
  return (char)CharProxy; /*0x65a32c*/
}
