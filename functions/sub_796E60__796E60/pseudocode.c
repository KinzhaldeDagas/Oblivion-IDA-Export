int __userpurge sub_796E60@<eax>(_DWORD *this@<ecx>, int a2@<edi>, char *a3, int a4)
{
  int result; // eax
  char *v6; // edi
  _DWORD v7[5]; // [esp+0h] [ebp-28h] BYREF
  int v8; // [esp+14h] [ebp-14h]
  _DWORD *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = v7;
  v7[4] = this;
  result = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( a3 )
  {
    if ( (unsigned int)a3 > 0xFFFFFFF )
      sub_790B90(a2);
    v6 = (char *)sub_794550(a3);
    LOBYTE(v8) = 0;
    *(this + 3) = &v6[0x10 * (_DWORD)a3];
    *(this + 1) = v6;
    *(this + 2) = v6;
    v10 = 0;
    sub_795D50(v6, (unsigned int)a3, a4);
  }
  return result;
}
