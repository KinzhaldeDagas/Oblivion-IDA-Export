QueuedChildren *__thiscall QueuedChildren::QueuedChildren(QueuedChildren *this, LONG a2)
{
  _WORD *v3; // eax
  _DWORD *v4; // esi
  unsigned __int16 *v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  QueuedChildren *result; // eax
  _WORD *v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  if ( !*((_DWORD *)this + 7) ) /*0x43a806*/
  {
    v3 = (_WORD *)FormHeapAlloc(0x14u); /*0x43a80e*/
    v4 = v3; /*0x43a813*/
    v9 = v3; /*0x43a818*/
    v10 = 0; /*0x43a81e*/
    if ( v3 ) /*0x43a826*/
    {
      sub_435B50(v3, 5u, 0xA); /*0x43a82e*/
      *v4 = &QueuedChildren::`vftable'; /*0x43a833*/
      v4[4] = 0; /*0x43a839*/
    }
    else
    {
      v4 = 0; /*0x43a842*/
    }
    *((_DWORD *)this + 7) = v4; /*0x43a844*/
  }
  v9 = (_WORD *)a2; /*0x43a84d*/
  if ( a2 ) /*0x43a851*/
    InterlockedIncrement((volatile LONG *)(a2 + 8)); /*0x43a857*/
  v5 = *((unsigned __int16 **)this + 7); /*0x43a85d*/
  v6 = v5[5]; /*0x43a860*/
  v7 = v5[4]; /*0x43a864*/
  v10 = 1; /*0x43a86a*/
  if ( v6 >= v7 ) /*0x43a872*/
    sub_4360A0(v5, v6 + v5[7]); /*0x43a87d*/
  result = (QueuedChildren *)sub_4362F0(v5, v6, (LONG *)&v9); /*0x43a88a*/
  v10 = 0xFFFFFFFF; /*0x43a891*/
  if ( a2 ) /*0x43a899*/
  {
    result = (QueuedChildren *)InterlockedDecrement((volatile LONG *)(a2 + 8)); /*0x43a89f*/
    if ( !result ) /*0x43a8a7*/
      return (**(QueuedChildren *(__thiscall ***)(LONG, int))a2)(a2, 1); /*0x43a8b1*/
  }
  return result; /*0x43a8b3*/
}
