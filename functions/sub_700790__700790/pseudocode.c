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

  v12 = 0;
  v9 = a2;
  v8 = 0;
  NiStream::NiStream((NiStream *)v10);
  v12 = 1;
  sub_713E50(v10, (int)this);
  v6 = 0;
  v7 = 0;
  sub_7121D0(v10, (int *)&v6, &v7);
  sub_712070(v10, v6, v7);
  v3 = *v11;
  v4 = *v11 == 0;
  *a2 = *v11;
  if ( !v4 )
    InterlockedIncrement((volatile LONG *)(v3 + 4));
  v8 = 1;
  FormHeapFree(v6);
  LOBYTE(v12) = 0;
  NiStream::~NiStream((NiStream *)v10);
  return a2;
}
