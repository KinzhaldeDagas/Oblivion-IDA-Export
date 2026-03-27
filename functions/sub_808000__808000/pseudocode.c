// positive sp value has been detected, the output may be wrong!
void __usercall sub_808000(_BYTE *a1@<eax>, int a2@<edx>, char a3@<ch>, int a4@<ebx>, int a5@<ebp>, int a6@<edi>)
{
  _BYTE *v6; // esi
  _DWORD *v7; // ebp
  NiD3DShaderProgram *VertexShader; // edi
  int v9; // esi
  __int16 v10; // [esp-D00h] [ebp-D00h]
  int v11; // [esp-CFCh] [ebp-CFCh]
  NiD3DShaderProgram **v12; // [esp-CC8h] [ebp-CC8h]
  int v13; // [esp-CC4h] [ebp-CC4h]
  int v14; // [esp-CBCh] [ebp-CBCh]
  _DWORD v15[683]; // [esp-CB4h] [ebp-CB4h] BYREF
  char v16[260]; // [esp-208h] [ebp-208h] BYREF
  char v17[260]; // [esp-104h] [ebp-104h] BYREF

  LOBYTE(a1) = (unsigned __int8)a1 & 0x28;
  LOBYTE(a1) = a3 + (*a1 | (unsigned __int8)a1);
  v6 = a1;
  __SS__ = v10;
  *(_BYTE *)(a2 + 0x34) += a3;
  v15[0x285] = a5;
  v15[0x286] = "POINT";
  v15[0x287] = a1;
  v15[0x288] = a6;
  v15[0x289] = a1;
  v15[0x28A] = a4;
  _memset(&v15[0x28B], a4, v11);
  v15[0x298] = a5;
  v15[0x299] = "POINT";
  v15[0x29A] = v6;
  v15[0x29B] = "SKIN";
  v15[0x29C] = v6;
  v15[0x29D] = a6;
  v15[0x29E] = v6;
  v15[0x29F] = a4;
  _memset(&v15[0x2A0], a4, 0x2C);
  if ( ShaderPackage >= 2 )
  {
    v7 = v15;
    v13 = v14 + 0x9C;
    do
    {
      sub_801030((char *)v7[0xFFFFFFFF], (int)v16);
      _sprintf(v17, "PAR2%03i.vso", a4);
      VertexShader = CreateVertexShader(v16, v7, "vs_2_0", v17, a4, a4);
      v9 = *(_DWORD *)v13;
      if ( *(NiD3DShaderProgram **)v13 != VertexShader )
      {
        if ( v9 != a4 && !InterlockedDecrement((volatile LONG *)(v9 + 4)) && v9 != a4 )
          (**(void (__thiscall ***)(int, int))v9)(v9, 1);
        *v12 = VertexShader;
        if ( VertexShader != (NiD3DShaderProgram *)a4 )
          InterlockedIncrement((volatile LONG *)VertexShader + 1);
      }
      ++v12;
      v7 += 0x13;
      ++v13;
    }
    while ( v13 < 0x24 );
  }
}
