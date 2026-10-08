// Oblivion NiDX9 declaration materializer. Walks enabled internal elements, computes offsets and stream strides, writes D3DVERTEXELEMENT9 records plus D3DDECL_END, then calls IDirect3DDevice9::CreateVertexDeclaration. Returns the cached native declaration when it is still valid.
IDirect3DVertexDeclaration9 *__thiscall NiDX9ShaderDeclaration_GetOrCreateD3DDeclaration(NiDX9ShaderDeclaration *this)
{
  IDirect3DVertexDeclaration9 *result; // eax
  int v3; // edi
  UInt32 v4; // ebp
  UInt32 v5; // ebx
  unsigned __int8 *v6; // edx
  UInt32 v7; // ecx
  _DWORD *v8; // eax
  UInt32 v9; // edx
  bool v10; // zf
  OblivionShaderDeclarationStream *v11; // ebx
  unsigned int v12; // ecx
  UInt32 v13; // ebp
  OblivionShaderDeclarationEntry *v14; // eax
  unsigned int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  UInt32 v17; // [esp+14h] [ebp-4h]

  result = this->members.Declaration; /*0x771157*/
  v3 = 0; /*0x77115b*/
  v4 = 0; /*0x77115d*/
  if ( LOBYTE(this->members.super.Unk028) )
  {
    if ( result ) /*0x77116b*/
    {
      result->lpVtbl->Release(result); /*0x771173*/
      this->members.Declaration = 0; /*0x771175*/
    }
    v5 = 0; /*0x771179*/
    if ( this->members.super.StreamCount ) /*0x77117b*/
    {
      do /*0x7711bc*/
      {
        v6 = &this->members.super.StreamEntries->Valid + v3; /*0x771183*/
        if ( v6 ) /*0x771185*/
        {
          v7 = 0; /*0x771187*/
          *v6 = 0; /*0x771189*/
          if ( this->members.super.MaxStreamEntryCount ) /*0x77118c*/
          {
            v8 = (_DWORD *)(*((_DWORD *)v6 + 2) + 0xC); /*0x771194*/
            do /*0x7711b1*/
            {
              if ( v8[0xFFFFFFFF] != 0xFFFFFFFF && *v8 != 0x11 ) /*0x7711a0*/
              {
                ++v4; /*0x7711a2*/
                *v6 = 1; /*0x7711a5*/
              }
              ++v7; /*0x7711a8*/
              v8 += 7; /*0x7711ab*/
            }
            while ( v7 < this->members.super.MaxStreamEntryCount ); /*0x7711b1*/
          }
        }
        ++v5; /*0x7711b3*/
        v3 += 0x10; /*0x7711b6*/
      }
      while ( v5 < this->members.super.StreamCount ); /*0x7711bc*/
      if ( v4 ) /*0x7711c0*/
        ++v4; /*0x7711c2*/
      v3 = 0; /*0x7711c5*/
    }
    if ( this->members.super.DeclarationCapacity < v4 ) /*0x7711ca*/
    {
      FormHeapFree((unsigned int)this->members.Elements); /*0x7711d0*/
      this->members.Elements = 0; /*0x7711d8*/
    }
    if ( !v4 ) /*0x7711dd*/
    {
      this->members.super.DeclarationCapacity = 0; /*0x7711df*/
      return 0; /*0x7711eb*/
    }
    if ( !this->members.Elements )
    {
      this->members.super.DeclarationCapacity = v4; /*0x7711ff*/
      this->members.Elements = (D3DVERTEXELEMENT9 *)FormHeapAlloc((unsigned __int64)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4);
    }
    v9 = 0; /*0x771212*/
    v10 = this->members.super.StreamCount == 0; /*0x771214*/
    this->members.super.DeclarationElementCount = 0; /*0x771217*/
    v17 = 0; /*0x77121a*/
    if ( !v10 ) /*0x77121e*/
    {
      v16 = 0; /*0x771220*/
      do /*0x771288*/
      {
        v11 = &this->members.super.StreamEntries[v16]; /*0x771227*/
        if ( v11->Valid ) /*0x77122b*/
        {
          v12 = 0; /*0x771230*/
          v13 = 0; /*0x771232*/
          v15 = 0; /*0x771237*/
          if ( this->members.super.MaxStreamEntryCount ) /*0x771234*/
          {
            do /*0x771272*/
            {
              v14 = (OblivionShaderDeclarationEntry *)((char *)v11->Entries + v3); /*0x771243*/
              if ( v14->Input != 0xFFFFFFFF && v14->Type != 0x11 ) /*0x77124f*/
              {
                v14->PackingOffset = v12; /*0x771252*/
                v15 += NiDX9ShaderDeclaration_AddDeclarationEntry(this, v14, v9); /*0x77125d*/
                v12 = v15; /*0x771261*/
                v9 = v17; /*0x771265*/
              }
              ++v13; /*0x771269*/
              v3 += 0x1C; /*0x77126c*/
            }
            while ( v13 < this->members.super.MaxStreamEntryCount ); /*0x771272*/
            v3 = 0; /*0x771274*/
          }
          v11->Stride = v12; /*0x771276*/
        }
        ++v16; /*0x771279*/
        v17 = ++v9; /*0x771284*/
      }
      while ( v9 < this->members.super.StreamCount ); /*0x771288*/
    }
    this->members.Elements[this->members.super.DeclarationElementCount].Stream = 0xFF; /*0x771290*/
    this->members.Elements[this->members.super.DeclarationElementCount].Offset = 0; /*0x77129c*/
    this->members.Elements[this->members.super.DeclarationElementCount].Type = 0x11; /*0x7712a7*/
    this->members.Elements[this->members.super.DeclarationElementCount].Method = 0; /*0x7712b2*/
    this->members.Elements[this->members.super.DeclarationElementCount].Usage = 0; /*0x7712bd*/
    this->members.Elements[this->members.super.DeclarationElementCount].UsageIndex = 0; /*0x7712c8*/
    if ( (int)this->members.super.Device->lpVtbl->CreateVertexDeclaration( /*0x7712e5*/
                this->members.super.Device,
                this->members.Elements,
                &this->members.Declaration) < 0 )
      return 0;                                 // Create the native IDirect3DVertexDeclaration9 from the materialized D3DVERTEXELEMENT9 array. /*0x7712e5*/
    result = this->members.Declaration; /*0x7712eb*/
    LOBYTE(this->members.super.Unk028) = 0; /*0x7712ed*/
  }
  return result; /*0x7711e3*/
}
