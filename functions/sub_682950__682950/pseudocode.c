void __thiscall sub_682950(_DWORD *this, int *a3)
{
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  if ( a3 ) /*0x68295a*/
  {
    if ( a3[8] == 1 ) /*0x682962*/
    {
      v3 = a3[1]; /*0x682990*/
      if ( v3 ) /*0x682995*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1); /*0x68299e*/
      v4 = (void (__thiscall ***)(_DWORD, int))a3[2]; /*0x6829a0*/
      if ( v4 ) /*0x6829a5*/
        (**v4)(v4, 1); /*0x6829ad*/
      FormHeapFree((unsigned int)a3); /*0x6829b0*/
    }
    else if ( a3[8] == 2 ) /*0x682967*/
    {
      NiTMap_RemoveAt(this + 8, *a3); /*0x68296f*/
      NiTMap_RemoveAt(this + 4, *a3); /*0x68297a*/
      NiTMap_SetAt(this + 0xC, *a3, (int)a3); /*0x682986*/
    }
  }
}
