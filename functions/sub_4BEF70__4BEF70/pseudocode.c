// Verified: initializes the 0x28-byte point allocation used by ROAD load/copy, zeros its leading 0x14 bytes through sub_67EDC0, initializes its XYZ at +0x14, and zeros the 8-byte connection-list header at +0x20. The meaning of leading bytes +0x00..+0x13 remains Unknown.
TESConnectedPoint *__thiscall TESConnectedPoint_ctor(TESConnectedPoint *this)
{
  sub_67EDC0((float *)this->unknown00); /*0x4bef73*/
  this->connections.firstNode.data = 0; /*0x4bef7a*/
  this->connections.firstNode.next = 0; /*0x4bef7d*/
  this->position.x = g_zeroNiPoint3.x; /*0x4bef85*/
  this->position.y = g_zeroNiPoint3.y; /*0x4bef8e*/
  this->position.z = g_zeroNiPoint3.z; /*0x4bef97*/
  return this; /*0x4bef9c*/
}
