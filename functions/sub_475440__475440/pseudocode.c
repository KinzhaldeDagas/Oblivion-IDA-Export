void __thiscall sub_475440(ActorAnimData *this, char a2, char a3)
{
  UInt32 v4; // eax
  UInt32 *v5; // edi
  int v6; // ecx
  BSAnimGroupSequence *v7; // eax
  UInt32 v8; // edx
  UInt32 *v9; // ebp
  int v10; // eax
  BSAnimGroupSequence *v11; // edx

  v4 = this->unkC8[1];
  v5 = &this->unkC8[1];
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 0xC);
    if ( v6 == 5 )
    {
      v6 = 0;
    }
    else if ( *(_DWORD *)(v4 + 0xC) == 6 )
    {
      v6 = 3;
    }
    if ( !a3 )
    {
      v7 = *(BSAnimGroupSequence **)(v4 + 0x10);
      if ( v7 )
      {
        if ( this->animSequences[v6] == v7 )
          sub_4733A0((int)this, v6);
      }
      if ( !this->unkD4 )
      {
        this->unkD4 = *v5;
        *v5 = 0;
        goto LABEL_15;
      }
      if ( !this->unkD8 )
      {
        this->unkD8 = (void *)*v5;
        *v5 = 0;
        goto LABEL_15;
      }
    }
    sub_472ED0(this, (int **)v5);
  }
LABEL_15:
  if ( a2 && (v8 = this->unkC8[2], v9 = &this->unkC8[2], v8) )
  {
    v10 = *(_DWORD *)(v8 + 0xC);
    if ( v10 == 5 )
    {
      v10 = 0;
    }
    else if ( *(_DWORD *)(v8 + 0xC) == 6 )
    {
      v10 = 3;
    }
    if ( a3 )
      goto LABEL_29;
    v11 = *(BSAnimGroupSequence **)(v8 + 0x10);
    if ( v11 )
    {
      if ( this->animSequences[v10] == v11 )
        sub_4733A0((int)this, v10);
    }
    if ( !this->unkD4 )
    {
      this->unkD4 = *v9;
      *v9 = 0;
      return;
    }
    if ( this->unkD8 )
    {
LABEL_29:
      sub_472ED0(this, (int **)&this->unkC8[2]);
    }
    else
    {
      this->unkD8 = (void *)*v9;
      *v9 = 0;
    }
  }
  else
  {
    *v5 = this->unkC8[2];
    this->unkC8[2] = 0;
  }
}
