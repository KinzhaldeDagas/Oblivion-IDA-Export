// LowProcess constructor: initializes editorPackage/editorPackProcedure and follow/pathing state, but no currentPackage field used by runtime package assignment.
LowProcess *__thiscall LowProcess::LowProcess(LowProcess *this)
{
  double v2; // st7

  sub_60CD90(this); /*0x643919*/
  this->__vftable = (LowProcess_vtbl *)&LowProcess::`vftable'; /*0x643920*/
  this->unk03C = 0; /*0x643926*/
  this->unk040 = 0; /*0x643929*/
  this->unk04C = 0; /*0x64392c*/
  this->unk050 = 0; /*0x64392f*/
  this->unk054 = 0; /*0x643932*/
  this->unk058 = 0; /*0x643935*/
  this->unk05C = 0; /*0x64393f*/
  this->unk060 = 0; /*0x643942*/
  AVCollection_Constr(&this->avDamageModifiers); /*0x643945*/
  v2 = kTerrainLODQuadRayDirectionZ; /*0x64394a*/
  this->curHour = kTerrainLODQuadRayDirectionZ; /*0x643950*/
  this->editorPackage = 0; /*0x643953*/
  this->unk00C = v2; /*0x643956*/
  this->pathing = 0; /*0x643959*/
  this->editorPackProcedure = kProcedure_TRAVEL; /*0x64395e*/
  this->unk010 = 0.0; /*0x643961*/
  this->follow = 0; /*0x643964*/
  this->unk028 = 0.0; /*0x643967*/
  this->curPackedDate = 0; /*0x64396a*/
  this->unk08C = 0.0; /*0x64396d*/
  this->unk01C = 0; /*0x643973*/
  this->procedureCompleted = 0; /*0x643976*/
  this->unk044 = 0; /*0x643979*/
  this->unk048 = 0; /*0x64397c*/
  this->unk030 = 0; /*0x64397f*/
  this->unk084 = 0; /*0x643982*/
  this->isAlerted = 0; /*0x643988*/
  this->unk020 = 0; /*0x64398b*/
  this->unk064 = 0; /*0x64398e*/
  this->unk068 = 0; /*0x643991*/
  this->unk06C = 0; /*0x643994*/
  this->usedItem = 0; /*0x643997*/
  this->unk038 = 0; /*0x64399a*/
  this->unk01E = 0; /*0x64399d*/
  return this; /*0x6439a2*/
}
