void __thiscall sub_4425D0(TES *this)
{
  NiRenderedTexture *v2; // esi

  if ( TESDataHandler )
  {
    this->gridCellArray->Fn_02(this->gridCellArray);
    (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)this->gridDistantArray + 8))(this->gridDistantArray);
    if ( CanopySadowMap )
    {
      v2 = CanopySadowMap;
      if ( !InterlockedDecrement((volatile LONG *)&CanopySadowMap->member) )
      {
        if ( v2 )
          v2->__vftable->super.super.super.Destructor((NiRefObject *)v2, 1);
      }
      CanopySadowMap = 0;
    }
    byte_B06A28 = 1;
    sub_7C4D90();
  }
}
