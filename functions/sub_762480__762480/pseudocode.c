char *__thiscall sub_762480(char *this)
{
  char *v2; // edi
  char *v3; // ebx
  char *v4; // eax
  size_t v6; // [esp-18h] [ebp-470h]
  char v7[1100]; // [esp+8h] [ebp-450h] BYREF

  v2 = this + 0x3BC; /*0x7624a3*/
  *(this + 0x3BC) = 0; /*0x7624aa*/
  _memset((int)v7, 0, sizeof(v7)); /*0x7624ad*/
  if ( (int)g_Direct3D9->lpVtbl->GetAdapterIdentifier(g_Direct3D9, *((_DWORD *)this + 0x16F), 0, v7) >= 0 ) /*0x7624d2*/
  {
    switch ( *((_DWORD *)this + 0x170) ) /*0x7624de*/
    {
      case 1: /*0x7624de*/
        v3 = (char *)&off_A88574; /*0x7624ff*/
        break;
      case 2: /*0x7624de*/
        v3 = off_A3CEB0; /*0x7624f8*/
        break;
      case 3: /*0x7624de*/
        v3 = (char *)&unk_A88578; /*0x7624f1*/
        break;
      default:
        v3 = "???"; /*0x7624ea*/
        break;
    }
    v4 = sub_761C50(this); /*0x762506*/
    HIDWORD(v6) = "%s (%s-%s)"; /*0x762515*/
    LODWORD(v6) = 0x200; /*0x76251a*/
    sub_6C5D40(v2, v2, v6, &v7[0x200], v3, v4); /*0x762520*/
  }
  return v2; /*0x762529*/
}
