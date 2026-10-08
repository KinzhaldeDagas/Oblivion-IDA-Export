int *__thiscall sub_700790(void *this, int *a2)
{
  int v3; // eax
  bool v4; // zf
  unsigned int v6; // [esp+10h] [ebp-4A8h] BYREF
  int v7; // [esp+14h] [ebp-4A4h] BYREF
  int v8; // [esp+18h] [ebp-4A0h]
  int *v9; // [esp+1Ch] [ebp-49Ch]
  _DWORD v10[130]; // [esp+20h] [ebp-498h] BYREF
  int *v11; // [esp+228h] [ebp-290h]
  int v12; // [esp+4B4h] [ebp-4h]

  v12 = 0; /*0x7007d9*/
  v9 = a2; /*0x7007e0*/
  v8 = 0; /*0x7007e4*/
  NiStream::NiStream((NiStream *)v10); /*0x7007e8*/
  v12 = 1; /*0x7007f2*/
  sub_713E50(v10, (int)this); /*0x7007fd*/
  v6 = 0; /*0x700810*/
  v7 = 0; /*0x700814*/
  sub_7121D0(v10, (int *)&v6, &v7); /*0x700818*/
  sub_712070(v10, v6, v7); /*0x70082b*/
  v3 = *v11; /*0x700837*/
  v4 = *v11 == 0; /*0x700839*/
  *a2 = *v11; /*0x70083b*/
  if ( !v4 ) /*0x70083d*/
    InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x700843*/
  v8 = 1; /*0x70084e*/
  FormHeapFree(v6); /*0x700856*/
  LOBYTE(v12) = 0; /*0x700862*/
  NiStream::~NiStream((NiStream *)v10); /*0x700869*/
  return a2; /*0x700870*/
}
