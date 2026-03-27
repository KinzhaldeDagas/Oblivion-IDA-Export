int *__thiscall sub_524100(TESForm *this, int *a2, signed int a3)
{
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // edx
  Data *OverrideFile; // eax
  Data *v6; // ebx
  int v7; // eax
  bool v8; // zf
  int *v9; // eax
  int v11; // [esp+14h] [ebp-124h] BYREF
  int v12; // [esp+18h] [ebp-120h]
  int v13[2]; // [esp+1Ch] [ebp-11Ch] BYREF
  char ArgList[260]; // [esp+24h] [ebp-114h] BYREF
  int v15; // [esp+134h] [ebp-4h]

  v12 = 0;
  GetSaveSize = this->vtbl[1].GetSaveSize;
  v13[1] = (int)a2;
  if ( !GetSaveSize(this, 0x45) )
  {
    OverrideFile = TESForm_GetOverrideFile(this, 0);
    v6 = OverrideFile;
    if ( !OverrideFile || !TESFile_GetIsMaster(OverrideFile) )
    {
      *a2 = 0;
      return a2;
    }
    if ( a3 > 2 )
      goto LABEL_6;
    if ( a3 == 2 )
    {
      v8 = TESActorBase_IsFemale(this) == 1;
    }
    else
    {
      if ( a3 != 1 )
        goto LABEL_12;
      v8 = TESActorBase_IsFemale(this) == 0;
    }
    if ( !v8 )
    {
LABEL_6:
      v7 = sub_523D80();
      sub_405070(a2, v7);
      return a2;
    }
LABEL_12:
    _sprintf(ArgList, "data\\Textures\\Faces\\%s\\%08X_%i.dds", v6->name, this->member.refID, a3);
    v9 = (int *)sub_442890((UInt32 *)v13, ArgList, 1, 1);
    sub_405070(&v11, *v9);
    v15 = 1;
    sub_7016A0((NiD3DVertexShader *)v13);
    sub_4A19F0(a2, &v11);
    v12 = 1;
    LOBYTE(v15) = 0;
    sub_7016A0((NiD3DVertexShader *)&v11);
    return a2;
  }
  *a2 = 0;
  return a2;
}
