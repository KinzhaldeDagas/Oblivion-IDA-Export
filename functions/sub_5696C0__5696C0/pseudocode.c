void __thiscall sub_5696C0(char *this, int a2)
{
  *this = *(_BYTE *)a2; /*0x5696c8*/
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 8); /*0x5696cd*/
  switch ( *this ) /*0x5696d8*/
  {
    case 0: /*0x5696d8*/
    case 5: /*0x5696d8*/
      *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 4); /*0x5696f2*/
      break; /*0x5696f5*/
    case 1: /*0x5696d8*/
      *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 4); /*0x5696e2*/
      *((_DWORD *)this + 1) = 0; /*0x5696e5*/
      break; /*0x5696ec*/
    case 2: /*0x5696d8*/
    case 3: /*0x5696d8*/
      *((_DWORD *)this + 2) = 0; /*0x569701*/
      def_5696D8(a2); /*0x569702*/
      break; /*0x569702*/
    case 4: /*0x5696d8*/
      *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 4); /*0x5696fb*/
      break; /*0x5696fe*/
    default:
      JUMPOUT(0x569708); /*0x569708*/
  }
}
