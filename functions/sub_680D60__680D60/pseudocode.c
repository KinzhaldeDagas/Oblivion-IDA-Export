char __thiscall sub_680D60(int this)
{
  char result; // al
  char Format[260]; // [esp+0h] [ebp-108h] BYREF

  result = 0;
  if ( *(_DWORD *)(this + 4) )
  {
    *(_DWORD *)(this + 4) = 0;
    *(float *)(this + 8) = 0.0;
    _sprintf(Format, "Clearing last door.");
    Interface_ConsolePrint(Format);
    return 1;
  }
  return result;
}
