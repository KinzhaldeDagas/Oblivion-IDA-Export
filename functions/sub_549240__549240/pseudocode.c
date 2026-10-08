int __userpurge sub_549240@<eax>(_DWORD *a1@<ecx>, float a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
  int result; // eax
  int v10; // edx
  int (__thiscall *v11)(_DWORD *, float *); // edx
  int v12; // [esp+44h] [ebp-50h]
  float v13[16]; // [esp+54h] [ebp-40h] BYREF

  result = (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*a1 + 0xB0))(a1, a3, a4, a5, a6); /*0x549266*/
  if ( (_BYTE)a3 ) /*0x54926a*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(a1[4] + 0x10))(a1 + 4, 0.0); /*0x54927d*/
    if ( a2 <= 0.0 ) /*0x54928a*/
      result = (*(int (__thiscall **)(_DWORD *, int))(a1[4] + 0x20))(a1 + 4, 1); /*0x5492ab*/
    else
      result = (*(int (__thiscall **)(_DWORD *, unsigned int, _DWORD))(*a1 + 0xC8))(a1, 0xFFFFFFFF, 1.0); /*0x54929e*/
  }
  if ( (_BYTE)a5 ) /*0x5492b2*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(a1[0x1B] + 0x10))(a1 + 0x1B, 0.0); /*0x5492c9*/
    v12 = 1; /*0x5492d1*/
    if ( *(float *)&a3 <= 0.0 ) /*0x5492dc*/
    {
      result = (*(int (__thiscall **)(_DWORD *, int))(a1[0x1B] + 0x20))(a1 + 0x1B, 1); /*0x549333*/
      if ( a7 ) /*0x54933a*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 0x64))(a1, 0, 1.0, v12); /*0x54934b*/
        *(float *)&v12 = 1.0; /*0x549355*/
        result = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x64))(a1, 1); /*0x54935c*/
      }
    }
    else if ( a8 ) /*0x5492e3*/
    {
      sub_54F630(v13, 0x11u, 1); /*0x5492ee*/
      v10 = *a1; /*0x5492f5*/
      v13[0] = 1.0; /*0x5492f7*/
      v11 = *(int (__thiscall **)(_DWORD *, float *))(v10 + 0xA4); /*0x5492fb*/
      v13[1] = 1.0; /*0x549301*/
      v12 = a3; /*0x549310*/
      result = v11(a1, v13); /*0x549314*/
    }
    else
    {
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0xA8))(a1, 2, a3); /*0x549326*/
    }
  }
  if ( (_BYTE)a4 ) /*0x549363*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(a1[0x32] + 0x10))(a1 + 0x32, 0.0, v12); /*0x54937c*/
    v12 = 1; /*0x549384*/
    if ( *(float *)&a3 <= 0.0 ) /*0x54938f*/
      result = (*(int (__thiscall **)(_DWORD *, int))(a1[0x32] + 0x20))(a1 + 0x32, 1); /*0x5493ae*/
    else
      result = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 0xA8))(a1, 0, a3); /*0x5493a1*/
  }
  if ( (_BYTE)a6 ) /*0x5493b5*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(a1[0x49] + 0x10))(a1 + 0x49, 0.0, v12); /*0x5493ce*/
    if ( *(float *)&a3 <= 0.0 ) /*0x5493e1*/
      return (*(int (__thiscall **)(_DWORD *, int))(a1[0x49] + 0x20))(a1 + 0x49, 1); /*0x549407*/
    else
      return (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0xA8))(a1, 3, a3); /*0x5493f3*/
  }
  return result; /*0x5493f5*/
}
