void __thiscall sub_439DC0(_DWORD **this, volatile LONG *a2)
{
  int v3; // ecx
  volatile LONG *v4; // edi
  unsigned __int8 (__thiscall *v5)(int, volatile LONG *, volatile LONG **); // eax
  int v6; // ecx
  unsigned __int8 (__thiscall *v7)(int, volatile LONG *, volatile LONG **); // edx
  volatile LONG *v8; // esi
  volatile LONG *v9; // esi
  volatile LONG *v10; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+20h] [ebp-4h]

  v10 = 0; /*0x439de8*/
  v3 = (int)*(this + 2); /*0x439dec*/
  v4 = a2; /*0x439df1*/
  v5 = *(unsigned __int8 (__thiscall **)(int, volatile LONG *, volatile LONG **))(*(_DWORD *)v3 + 4); /*0x439df5*/
  v11 = 0; /*0x439dfe*/
  if ( v5(v3, a2, &v10) ) /*0x439e02*/
    IOTask_Cancel(v10); /*0x439e13*/
  a2 = 0; /*0x439e18*/
  v6 = (int)*(this + 4); /*0x439e1c*/
  v7 = *(unsigned __int8 (__thiscall **)(int, volatile LONG *, volatile LONG **))(*(_DWORD *)v6 + 4); /*0x439e21*/
  LOBYTE(v11) = 1; /*0x439e2a*/
  if ( v7(v6, v4, &a2) ) /*0x439e2f*/
    IOTask_Cancel(a2); /*0x439e40*/
  v8 = a2; /*0x439e45*/
  LOBYTE(v11) = 0; /*0x439e51*/
  if ( a2 ) /*0x439e55*/
  {
    if ( !InterlockedDecrement(a2 + 2) ) /*0x439e5b*/
    {
      if ( v8 ) /*0x439e63*/
        (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x439e6d*/
    }
  }
  v9 = v10; /*0x439e6f*/
  v11 = 0xFFFFFFFF; /*0x439e75*/
  if ( v10 ) /*0x439e7d*/
  {
    if ( !InterlockedDecrement(v10 + 2) ) /*0x439e83*/
    {
      if ( v9 ) /*0x439e8b*/
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x439e95*/
    }
  }
}
