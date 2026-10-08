// Player/reference sound-distance helper. Computes distance from player to target ref and feeds the result into the sound system scaling/update path.
void __thiscall Player_UpdateSoundDistanceFromRef(void *this, int a2)
{
  float *v3; // esi
  float *v4; // eax
  float v5; // [esp+Ch] [ebp-Ch]
  float v6; // [esp+10h] [ebp-8h]
  float v7; // [esp+14h] [ebp-4h]
  float v8; // [esp+1Ch] [ebp+4h]
  float v9; // [esp+1Ch] [ebp+4h]
  float v10; // [esp+1Ch] [ebp+4h]

  if ( a2 ) /*0x65dc5d*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2) ) /*0x65dc6d*/
    {
      v3 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this); /*0x65dc83*/
      v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2); /*0x65dc8f*/
      v5 = *v4 - *v3; /*0x65dc95*/
      v6 = v4[1] - v3[1]; /*0x65dc9f*/
      v7 = v4[2] - v3[2]; /*0x65dca9*/
      v8 = v6 * v6 + v5 * v5 + v7 * v7; /*0x65dcc9*/
      v9 = sqrt(v8); /*0x65dcd6*/
      v10 = sub_548A10(v9); /*0x65dce7*/
      if ( v10 > 0.0 ) /*0x65dcfd*/
        sub_7EB080(v10); /*0x65dd03*/
    }
  }
}
