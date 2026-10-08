void __thiscall sub_8AAD60(int this, float a2)
{
  int v3; // eax
  int BhkBlendCollisionObject; // edi
  __int16 v5; // ax
  int v6; // [esp+18h] [ebp-8h] BYREF
  int v7; // [esp+1Ch] [ebp-4h] BYREF
  float v8; // [esp+24h] [ebp+4h]

  v3 = *(_DWORD *)(this + 0x30); /*0x8aad66*/
  if ( v3 ) /*0x8aad6b*/
  {
    if ( (*(_BYTE *)(this + 8) & 8) != 0 ) /*0x8aad7a*/
    {
      if ( *(_DWORD *)(this + 0x50) ) /*0x8aad80*/
      {
        BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(v3); /*0x8aad95*/
        if ( BhkBlendCollisionObject ) /*0x8aad9c*/
        {
          v8 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)this + 0x64))(this, LODWORD(a2)); /*0x8aadaf*/
          if ( sub_8AA990((float **)this, v8, (float *)&v6, (float *)&v7) ) /*0x8aadc7*/
          {
            if ( *(float *)(this + 0x58) < 0.0 ) /*0x8aadda*/
            {
              *(float *)(this + 0x58) = *(float *)(BhkBlendCollisionObject + 0x14); /*0x8aaddf*/
              *(float *)(this + 0x5C) = *(float *)(BhkBlendCollisionObject + 0x18); /*0x8aade5*/
            }
            *(float *)(BhkBlendCollisionObject + 0x14) = *(float *)&v6; /*0x8aadec*/
            *(float *)(BhkBlendCollisionObject + 0x18) = *(float *)&v7; /*0x8aadf3*/
          }
          if ( *(float *)(this + 0x18) == v8 ) /*0x8aae04*/
          {
            v5 = *(_WORD *)(this + 8); /*0x8aae06*/
            if ( (v5 & 6) == 4 ) /*0x8aae12*/
            {
              if ( (v5 & 0x40) != 0 ) /*0x8aae19*/
                sub_8AA7F0((float *)this); /*0x8aae1d*/
              sub_8AA3E0(this); /*0x8aae24*/
              sub_8AA420(this, BhkBlendCollisionObject); /*0x8aae2c*/
              (*(void (**)(void))(*(_DWORD *)this + 0x50))(); /*0x8aae36*/
            }
          }
        }
        else
        {
          *(float *)(this + 0x20) = a2; /*0x8aae40*/
        }
      }
    }
  }
}
