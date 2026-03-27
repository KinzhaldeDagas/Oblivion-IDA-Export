UInt32 __stdcall sub_7C9140(int a1, float a2, int a3, int a4)
{
  UInt32 *v5; // edi
  float *v6; // esi
  UInt32 result; // eax
  float v8; // [esp+10h] [ebp-18h] BYREF
  float v9; // [esp+14h] [ebp-14h]
  float v10; // [esp+18h] [ebp-10h]
  float v11[3]; // [esp+1Ch] [ebp-Ch] BYREF
  float v12; // [esp+38h] [ebp+10h]

  v5 = &dword_B45040;
  v6 = 0;
  do
  {
    result = *v5;
    if ( *(_BYTE *)(*v5 + 8) )
    {
      v11[0] = v6[0x2D194A];
      v11[1] = v6[0x2D194B];
      v11[2] = v6[0x2D194C];
      result = D3DXVec3TransformCoord_0(&v8, v11, a1);
      v12 = v6[0x2D196A];
      if ( !a4 )
      {
        result = a3 - 0x177;
        if ( (unsigned int)(a3 - 0x177) > 2 )
        {
          v12 = v12 / a2;
        }
        else
        {
          v8 = v8 * a2;
          v9 = v9 * a2;
          v10 = a2 * v10;
        }
      }
      v6[0x2D13F6] = v8;
      v6[0x2D13F7] = v9;
      v6[0x2D13F8] = v10;
      v6[0x2D13F9] = v12;
    }
    ++v5;
    v6 += 4;
  }
  while ( (int)v5 < (int)&dword_B4504C );
  return result;
}
