ExtraTeleport *__thiscall GetTeleportExtraData(_BYTE *this)
{
  return (ExtraTeleport *)ExtraDataList_GetTeleport((ExtraDataList *)(this + 0x44));
}
