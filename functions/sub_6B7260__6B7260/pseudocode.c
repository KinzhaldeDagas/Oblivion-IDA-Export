// Tests whether the engine sound handle stored in *this is still active in the Oblivion audio manager. Dialogue menus and DialoguePackage HighProcess playback use it as the speech-completion gate.
bool __thiscall SoundHandle::IsPlaying(UInt32 *this)
{
  return LODWORD(qword_B3BB2C[0x1BA]) && sub_6AB9D0((_DWORD *)LODWORD(qword_B3BB2C[0x1BA]), *this); /*0x6b726f*/
}
