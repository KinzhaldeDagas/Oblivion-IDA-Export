void __thiscall sub_4B3210(_BYTE *this, TESObjectREFR *a2)
{
  void *FormModelPAth; // edi
  char v5[260]; // [esp+8h] [ebp-108h] BYREF

  if ( this == (_BYTE *)TESDataHandler_g_DoorMarker || this == (_BYTE *)TESDataHandler_g_TravelMarker )
    a2 = 0;
  FormModelPAth = sub_4693E0(this, a2);
  if ( !FormModelPAth )
    FormModelPAth = GetFormModelPAth(this);
  if ( !a2 || TESObjectREFR_GetScale(a2) == fConstant_1 )
  {
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)FormModelPAth, 1, 1);
  }
  else
  {
    sub_4B2B00(this, a2, v5);
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)v5, 1, 1);
    if ( ModelLoader_IsModelLoaded__(ModelLoaderPtr, (int)v5, (int)v5) )
    {
      --dword_B35AC8;
    }
    else
    {
      QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)FormModelPAth, 1, 1);
      --dword_B35AC4;
    }
  }
  if ( *(this + 4) == 0x23 && a2 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    sub_522260(this);
}
