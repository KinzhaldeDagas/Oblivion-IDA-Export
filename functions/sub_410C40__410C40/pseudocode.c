char __cdecl sub_410C40(const char *a1, char a2)
{
  int v2; // ecx
  int v3; // eax
  char result; // al

  if ( ObjectPtr )
  {
    if ( dword_B3342C )
      PrintError("Trying to pause a movie while another movie is already paused.  This is not currently supported.");
    BinkPause(*(_DWORD *)ObjectPtr, 1);
    dword_B3342C = ObjectPtr;
    ObjectPtr = 0;
  }
  if ( byte_B33431 && (v2 = dword_B33440) != 0 )
  {
    dword_B33440 = 0;
    byte_B33431 = 0;
  }
  else
  {
    v3 = FormHeapAlloc(0x28u);
    if ( v3 )
    {
      *(_DWORD *)v3 = 0;
      *(float *)(v3 + 0x14) = 1.0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      *(float *)(v3 + 0x18) = 0.0;
      *(_DWORD *)(v3 + 0xC) = 0;
      *(float *)(v3 + 0x1C) = 0.0;
      *(_DWORD *)(v3 + 0x10) = 0;
      *(_DWORD *)(v3 + 0x20) = 0;
      *(_BYTE *)(v3 + 0x24) = 0;
    }
    else
    {
      v3 = 0;
    }
    v2 = v3;
  }
  ObjectPtr = v2;
  result = sub_4105F0(v2, a1, a2);
  if ( !result )
  {
    sub_410B00();
    return 0;
  }
  return result;
}
