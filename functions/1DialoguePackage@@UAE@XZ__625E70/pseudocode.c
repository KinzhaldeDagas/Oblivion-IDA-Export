// DialoguePackage destructor/cancellation path. Clears PlayerCharacter.dialoguePackage when owned, destroys/frees the generated Conversation, and never calls DialogueItem::RunResult. Deferred INFO results are lost on interruption; ImmediateResult side effects already occurred during construction.
void __thiscall DialoguePackage::Destructor(DialoguePackageRuntimeView *this)
{
  ConversationView *conversation; // edi

  this->super.__vftable = (TESPackageVtbl *)&DialoguePackage::`vftable'; /*0x625e99*/
  if ( this == (DialoguePackageRuntimeView *)reference->dialoguePackage ) /*0x625eb0*/
    reference->dialoguePackage = 0; /*0x625eb2*/
  conversation = this->conversation; /*0x625eb8*/
  if ( conversation ) /*0x625ebd*/
  {
    j_Conversation::Destroy((unsigned int **)this->conversation);// Destroy the owned Conversation directly. No DialogueItem::RunResult call occurs on this cancellation/destruction path. /*0x625ec1*/
    FormHeapFree((unsigned int)conversation); /*0x625ec7*/
  }
  TESPackage::~TESPackage(&this->super); /*0x625ed9*/
}
