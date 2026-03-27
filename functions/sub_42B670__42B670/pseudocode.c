void __thiscall sub_42B670(_DWORD *this, Data *a1)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  char Dst[4]; // [esp+8h] [ebp-1Ch] BYREF
  int v10; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  if ( a1 )
  {
    if ( TESFile_GetChunkType(a1) == 0x4C455458 )
    {
      *(_DWORD *)Dst = 0;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      TESFile_GetChunkData(a1, Dst, 0x1Cu);
      v3 = v10;
      v4 = v11;
      *this = *(_DWORD *)Dst;
      v5 = v12;
      *(this + 1) = v3;
      v6 = v13;
      *(this + 2) = v4;
      v7 = v14;
      *(this + 3) = v5;
      v8 = v15;
      *(this + 4) = v6;
      *(this + 5) = v7;
      *(this + 6) = v8;
    }
  }
}
