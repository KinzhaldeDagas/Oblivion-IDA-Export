signed int __thiscall sub_760010(NiD3DPass *this, unsigned int a2, unsigned int *a3)
{
  NiD3DTextureStage *v3; // ebx
  NiD3DTextureStage *v4; // edi
  int v7; // eax
  int v8; // ebp
  bool v9; // zf
  UInt32 CurrentStage; // eax
  NiTexture *Texture; // edi
  bool v12; // zf
  bool v13; // bl
  UInt32 v14; // eax

  v3 = (NiD3DTextureStage *)a2;
  v4 = (NiD3DTextureStage *)a3;
  if ( a2 >= dword_B28CB0 )
  {
    if ( a2 >= dword_B28CB8 )
      return 1;
    a2 = (unsigned int)a3;
    if ( a3 )
      ++a3[0x17];
    sub_75FED0(&this->Stages._vtbl, v3, (NiD3DTextureStage **)&a2);
    if ( v4 )
    {
      v9 = v4[7].Unk08-- == 1;
      if ( v9 )
        sub_772560(v4);
    }
  }
  v7 = *(&this->Stages.data->Stage + (_DWORD)v3);
  if ( v7 )
  {
    --this->StageCount;
    v8 = *(_DWORD *)(v7 + 4);
    v9 = v8 == 0;
    if ( v8 )
    {
      InterlockedIncrement((volatile LONG *)(v8 + 4));
      v9 = v8 == 0;
    }
    LOBYTE(a2) = !v9;
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    if ( (_BYTE)a2 )
      --this->TexturesPerPass;
  }
  a2 = (unsigned int)v4;
  if ( v4 )
    ++v4[7].Unk08;
  sub_75FED0(&this->Stages._vtbl, v3, (NiD3DTextureStage **)&a2);
  if ( v4 )
  {
    v9 = v4[7].Unk08-- == 1;
    if ( v9 )
      sub_772560(v4);
    v4->Stage = (UInt32)v3;
    CurrentStage = this->CurrentStage;
    if ( (NiD3DTextureStage *)CurrentStage == v3 )
      this->CurrentStage = CurrentStage + 1;
    ++this->StageCount;
    Texture = v4->Texture;
    v12 = Texture == 0;
    if ( Texture )
    {
      InterlockedIncrement((volatile LONG *)&Texture->members);
      v12 = Texture == 0;
    }
    v13 = !v12;
    if ( Texture )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) )
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1);
    }
    if ( v13 )
    {
      ++this->TexturesPerPass;
      return 0;
    }
  }
  else
  {
    v14 = this->CurrentStage;
    if ( (NiD3DTextureStage *)v14 == (NiD3DTextureStage *)((char *)&v3->Stage + 1) )
    {
      if ( v14 )
      {
        while ( *((_DWORD *)this->Stages.data + v14 - 1) )
          ;
        this->CurrentStage = v14 - 1;
      }
    }
  }
  return 0;
}
