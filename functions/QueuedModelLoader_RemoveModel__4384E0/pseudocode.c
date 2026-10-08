void __thiscall QueuedModelLoader_RemoveModel(int *this, int a2, char a3, int a4)
{
  int v5; // ecx
  volatile LONG *v6; // [esp+8h] [ebp-4h] BYREF

  v5 = *this; /*0x4384e9*/
  v6 = 0; /*0x4384ef*/
  if ( (*(unsigned __int8 (__thiscall **)(int, int, volatile LONG **))(*(_DWORD *)v5 + 4))(v5, a2, &v6) ) /*0x4384fe*/
  {
    if ( a4 == 1 ) /*0x43850f*/
      InterlockedDecrement(v6 + 1); /*0x438515*/
    else
      sub_434C00(v6, -(__int16)a4); /*0x438520*/
    if ( a3 ) /*0x43852a*/
      sub_435A10(this, (unsigned int)v6, a2); /*0x438534*/
  }
}
