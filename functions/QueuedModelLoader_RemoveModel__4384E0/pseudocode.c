void __thiscall QueuedModelLoader_RemoveModel(int *this, int a2, char a3, int a4)
{
  int v5; // ecx
  volatile LONG *v6; // [esp+8h] [ebp-4h] BYREF

  v5 = *this;
  v6 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, volatile LONG **))(*(_DWORD *)v5 + 4))(v5, a2, &v6) )
  {
    if ( a4 == 1 )
      InterlockedDecrement(v6 + 1);
    else
      sub_434C00(v6, -(__int16)a4);
    if ( a3 )
      sub_435A10(this, (unsigned int)v6, a2);
  }
}
