// Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
void __thiscall ActorAnimData_PlayAnimGroup(
        ActorAnimData *this,
        unsigned int encodedKey,
        unsigned int playImmediately,
        int repeatOrAction)
{
  int GroupID; // eax
  int v6; // edx
  int v7[3]; // [esp+18h] [ebp-Ch] BYREF

  GroupID = AnimKey_GetGroupID(encodedKey); /*0x477b6d*/
  v6 = dword_B102E8[9 * GroupID]; /*0x477b77*/
  if ( v6 == 5 ) /*0x477b88*/
  {
    v6 = 0; /*0x477b96*/
  }
  else if ( dword_B102E8[9 * GroupID] == 6 ) /*0x477b8d*/
  {
    v6 = 3; /*0x477b8f*/
  }
  if ( GroupID == 0xFF ) /*0x477b9d*/
ActorAnimData_PlayAnimGroup___def_477BB5:
    JUMPOUT(0x477C24); /*0x477c24*/
  switch ( dword_B102EC[9 * GroupID] ) /*0x477bb5*/
  {
    case 0: /*0x477bb5*/
    case 1: /*0x477bb5*/
      if ( !playImmediately ) /*0x477bc3*/
      {
        *((_WORD *)&this->unk70 + v6) = encodedKey; /*0x477bf0*/
        *(_DWORD *)&this->pad78[4 * v6 + 2] = repeatOrAction; /*0x477bf6*/
        return; /*0x477bff*/
      }
      if ( playImmediately != 1 ) /*0x477bc8*/
        goto ActorAnimData_PlayAnimGroup___def_477BB5; /*0x477bc8*/
      *((_WORD *)&this->unk70 + v6) = 0xFF; /*0x477bce*/
      this->unk48State[v6 + 5] = repeatOrAction; /*0x477bd7*/
      ActorAnimData_PlayEncodedGroup(this, (_DWORD *)encodedKey, 0xFFFFFFFF); /*0x477bde*/
      ActorAnimData_SampleAndExtractRootMotion((int)this, this->unk94, v7, 1); /*0x477bea*/
LABEL_12:
      ActorAnimData_PlayAnimGroup_::def_477BB5(encodedKey, playImmediately, repeatOrAction); /*0x477c1f*/
      return;
    case 2: /*0x477bb5*/
    case 3: /*0x477bb5*/
    case 4: /*0x477bb5*/
    case 5: /*0x477bb5*/
    case 6: /*0x477bb5*/
    case 7: /*0x477bb5*/
      ActorAnimData_PlayEncodedGroup(this, (_DWORD *)encodedKey, 0xFFFFFFFF); /*0x477c07*/
      ActorAnimData_SampleAndExtractRootMotion((int)this, this->unk94, v7, 1); /*0x477c1f*/
      goto LABEL_12; /*0x477c1f*/
    default:
      goto ActorAnimData_PlayAnimGroup___def_477BB5;
  }
}
