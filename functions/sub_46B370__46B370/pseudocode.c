void sub_46B370()
{
  _DWORD *v2; // edi
  int v3; // ecx
  int v4; // ebx
  const void *v5; // ebp
  int v6; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  void *v9; // esi
  size_t v10; // [esp-14h] [ebp-58h]
  int Size; // [esp+4h] [ebp-40h]
  int v12; // [esp+8h] [ebp-3Ch]
  _DWORD v13[4]; // [esp+Ch] [ebp-38h] BYREF
  int v14; // [esp+1Ch] [ebp-28h]
  int v15; // [esp+2Ch] [ebp-18h]
  int v16; // [esp+30h] [ebp-14h]
  int v17; // [esp+34h] [ebp-10h]

  v2 = TESForm_Static_FormRecordBuffer;
  if ( TESForm_Static_FormRecordBuffer )
  {
    v3 = TESForm_Static_FormRecordSize;
    if ( (unsigned int)TESForm_Static_FormRecordSize > 0x14 && (v2[2] & 0x40000) == 0 )
    {
      v4 = v3 - 0x14;
      v12 = v3 - 0x14;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      if ( sub_744FB0(v13, 0xFFFFFFFF, "1.2.1", 0x38) )
      {
        PrintError("Error initializing ZLib stream for deflate.");
      }
      else
      {
        v5 = (const void *)FormHeapAlloc(2 * v4);
        v13[1] = v4;
        v13[0] = v2 + 5;
        v14 = 2 * v4;
        v13[3] = v5;
        if ( sub_743A40(v13, 4u) == 0xFFFFFFFE )
        {
          PrintError("Error deflating ZLib stream.");
          FormHeapFree((unsigned int)v5);
        }
        else
        {
          v6 = 2 * v4 - v14;
          v7 = v6 + 0x18;
          Size = v6;
          v8 = (_DWORD *)FormHeapAlloc(v6 + 0x18);
          v2[2] |= 0x40000u;
          v9 = v8;
          v2[1] = v7 - 0x14;
          *v8 = *v2;
          v8[1] = v2[1];
          v8[2] = v2[2];
          v8[3] = v2[3];
          LODWORD(v10) = Size;
          v8[4] = v2[4];
          v8[5] = v12;
          memcpy(v8 + 6, v5, v10);
          FormHeapFree((unsigned int)TESForm_Static_FormRecordBuffer);
          TESForm_Static_FormRecordBuffer = v9;
          TESForm_Static_FormRecordSize = v7;
          sub_743E50((int)v13);
          FormHeapFree((unsigned int)v5);
        }
      }
    }
  }
}
