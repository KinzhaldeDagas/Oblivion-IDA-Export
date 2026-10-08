//
// [4.1 layers 2026-10-03] Verified __thiscall(pass,index,stage), ret8, zero success. Retains pooled stage via refcount at stage+5C; StageCount/CurrentStage maintained. Stage texture field +4 separately uses NiRefObject ownership. Fallout LoadStagesAndPasses 828EBD20 uses corresponding SetStage.
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

  v3 = (NiD3DTextureStage *)a2; /*0x760011*/
  v4 = (NiD3DTextureStage *)a3; /*0x76001d*/
  if ( a2 >= dword_B28CB0 ) /*0x760023*/
  {
    if ( a2 >= dword_B28CB8 ) /*0x76002b*/
      return 1; /*0x760035*/
    a2 = (unsigned int)a3; /*0x76003a*/
    if ( a3 ) /*0x76003e*/
      ++a3[0x17]; /*0x760040*/
    sub_75FED0(&this->Stages._vtbl, v3, (NiD3DTextureStage **)&a2); /*0x76004d*/
    if ( v4 ) /*0x760054*/
    {
      v9 = v4[7].Unk08-- == 1; /*0x760056*/
      if ( v9 ) /*0x76005a*/
        sub_772560(v4); /*0x76005e*/
    }
  }
  v7 = *(&this->Stages.data->Stage + (_DWORD)v3); /*0x760066*/
  if ( v7 ) /*0x76006c*/
  {
    --this->StageCount; /*0x76006e*/
    v8 = *(_DWORD *)(v7 + 4); /*0x760072*/
    v9 = v8 == 0; /*0x760075*/
    if ( v8 ) /*0x760077*/
    {
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x76007d*/
      v9 = v8 == 0; /*0x760083*/
    }
    LOBYTE(a2) = !v9; /*0x760085*/
    if ( v8 ) /*0x76008c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x760092*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7600a5*/
    }
    if ( (_BYTE)a2 ) /*0x7600ac*/
      --this->TexturesPerPass; /*0x7600ae*/
  }
  a2 = (unsigned int)v4; /*0x7600b4*/
  if ( v4 ) /*0x7600bd*/
    ++v4[7].Unk08; /*0x7600bf*/
  sub_75FED0(&this->Stages._vtbl, v3, (NiD3DTextureStage **)&a2); /*0x7600cb*/
  if ( v4 ) /*0x7600d2*/
  {
    v9 = v4[7].Unk08-- == 1; /*0x7600d4*/
    if ( v9 ) /*0x7600d8*/
      sub_772560(v4); /*0x7600dc*/
    v4->Stage = (UInt32)v3; /*0x7600e1*/
    CurrentStage = this->CurrentStage; /*0x7600e3*/
    if ( (NiD3DTextureStage *)CurrentStage == v3 ) /*0x7600e8*/
      this->CurrentStage = CurrentStage + 1; /*0x7600ed*/
    ++this->StageCount; /*0x7600f0*/
    Texture = v4->Texture; /*0x7600f3*/
    v12 = Texture == 0; /*0x7600f6*/
    if ( Texture ) /*0x7600f8*/
    {
      InterlockedIncrement((volatile LONG *)&Texture->members); /*0x7600fe*/
      v12 = Texture == 0; /*0x760104*/
    }
    v13 = !v12; /*0x760106*/
    if ( Texture ) /*0x76010b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x760111*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x760122*/
    }
    if ( v13 ) /*0x760126*/
    {
      ++this->TexturesPerPass; /*0x760128*/
      return 0; /*0x760131*/
    }
  }
  else
  {
    v14 = this->CurrentStage; /*0x760134*/
    if ( (NiD3DTextureStage *)v14 == (NiD3DTextureStage *)((char *)&v3->Stage + 1) ) /*0x76013c*/
    {
      if ( v14 ) /*0x760140*/
      {
        while ( *((_DWORD *)this->Stages.data + v14 - 1) ) /*0x760145*/
          ; /*0x760150*/
        this->CurrentStage = v14 - 1; /*0x760162*/
      }
    }
  }
  return 0; /*0x76002d*/
}
