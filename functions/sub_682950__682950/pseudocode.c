void __thiscall sub_682950(_DWORD *this, int *a3)
{
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  if ( a3 )
  {
    if ( a3[8] == 1 )
    {
      v3 = a3[1];
      if ( v3 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
      v4 = (void (__thiscall ***)(_DWORD, int))a3[2];
      if ( v4 )
        (**v4)(v4, 1);
      FormHeapFree((unsigned int)a3);
    }
    else if ( a3[8] == 2 )
    {
      NiTMap_RemoveAt(this + 8, *a3);
      NiTMap_RemoveAt(this + 4, *a3);
      NiTMap_SetAt(this + 0xC, *a3, (int)a3);
    }
  }
}
