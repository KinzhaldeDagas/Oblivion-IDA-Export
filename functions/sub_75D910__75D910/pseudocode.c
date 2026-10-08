int __thiscall sub_75D910(int this, unsigned int a2, int a3)
{
  int result; // eax
  int (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // edx
  bool v6; // zf
  MEF_RefPointerArray16 **v7; // edx

  result = a2; /*0x75d914*/
  if ( a2 >= *(unsigned __int16 *)(this + 0x7E) ) /*0x75d91b*/
  {
    v4 = (int (__thiscall ***)(_DWORD, int))a3; /*0x75d91d*/
    if ( !a3 ) /*0x75d923*/
      return result; /*0x75d923*/
    goto LABEL_10; /*0x75d923*/
  }
  v5 = *(_DWORD *)(this + 0x78); /*0x75d92b*/
  v6 = *(_DWORD *)(v5 + 4 * a2) == 0; /*0x75d92e*/
  v7 = (MEF_RefPointerArray16 **)(v5 + 4 * a2); /*0x75d932*/
  if ( v6 ) /*0x75d935*/
  {
    v4 = (int (__thiscall ***)(_DWORD, int))a3; /*0x75d937*/
    if ( !a3 ) /*0x75d93d*/
      return result; /*0x75d93d*/
    goto LABEL_10; /*0x75d93d*/
  }
  result = *(_DWORD *)(*(_DWORD *)(this + 0x78) + 4 * a2); /*0x75d948*/
  if ( *(_WORD *)(result + 0xA) < *(_WORD *)(result + 8) ) /*0x75d953*/
    result = sub_6FEB00(*v7, &a3); /*0x75d95c*/
  v4 = (int (__thiscall ***)(_DWORD, int))a3; /*0x75d961*/
  if ( a3 ) /*0x75d967*/
  {
LABEL_10:
    result = InterlockedDecrement((volatile LONG *)(a3 + 4)); /*0x75d969*/
    if ( !result ) /*0x75d975*/
      return (**v4)(v4, 1); /*0x75d97f*/
  }
  return result; /*0x75d981*/
}
