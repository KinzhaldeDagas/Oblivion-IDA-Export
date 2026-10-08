// DialoguePackage participant accessor: returns the original initiating speaker at +0x5C.
// DX11 verified shared leaf alias: in NiDX9SourceTextureData vtable A883C4+10, MOV EAX,[ECX+5C] returns mip count. Existing DialoguePackage naming is another use; do not infer object type from leaf name.
Actor *__thiscall DialoguePackage::GetSpeaker(DialoguePackageRuntimeView *this)
{
  return this->speaker; /*0x625d33*/
}
