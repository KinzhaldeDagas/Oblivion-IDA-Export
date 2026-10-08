// OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::AddStrip receives ownership of a caller FormHeap-allocated unsigned-short array (for example allocation at 0x78F477 before call 0x78F48C), appends its unsigned-short length and pointer to per-LOD nested vectors, then adds the 32-bit result of zero_extend(stripLength)-2 to the per-LOD triangle total. There is no clamp in this function; callers are expected to provide a valid strip length (at least two). RT4.1's later contiguous vector<int> representation is contrast only and was not projected onto Oblivion.
//
// [2026-10-03 strip ownership/splitting] Verified currentStripCounter+26 selects/resizes each per-LOD length/pointer vector, transfers the supplied FormHeap buffer, and adds length-2 to the DWORD triangle-window total. Frond-specific wrapper at79A7F7 preserves the full DWORD caller length before this WORD API, stages extra buffers, then transfers each chunk. Generic AddStrip ABI remains ushort; no global detour or widening of native structures.
// [2026-10-05 v120 branch LOD] Verified pointer store at7961F3 transfers the caller-allocated uint16 array into geometry per-LOD slot; triangle count update79621E subtracts2. Plugin now prepares ALL ring-pair arrays before any AddStrip call, releasing pending arrays on its preparation/allocation failure. After publication, native geometry owns each array. This prevents half-published branch LODs caused by plugin buffer allocation failure; failure of internal native vector allocation remains outside this guarantee. uint16 strip counter and length are preflight bounded.
void __thiscall OB_CIndexedGeometry_AddStrip_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned __int16 lodLevel,
        unsigned __int16 *strip,
        unsigned __int16 stripLength)
{
  OB_stVectorUShort_010201A0 *begin; // ecx
  OB_stVectorUShort_010201A0 *v6; // ecx
  OB_stVectorUShort_010201A0 *v7; // ebx
  unsigned __int16 *v8; // ecx
  unsigned int currentStripCounter; // ebp
  OB_stVectorUShortPtr_010201A0 *v10; // ecx
  OB_stVectorUShortPtr_010201A0 *v11; // ecx
  unsigned int v12; // ebp
  OB_stVectorUShortPtr_010201A0 *v13; // ebx
  unsigned __int16 **v14; // ecx
  unsigned int *v15; // ecx

  begin = this->perLodStripLengths.begin; /*0x796103*/
  if ( !begin || lodLevel >= (unsigned int)(this->perLodStripLengths.end - begin) ) /*0x79611a*/
    _invalid_parameter_noinfo(); /*0x79611c*/
  OB_stVectorUShort_ResizeFill_010201A0(&this->perLodStripLengths.begin[lodLevel], this->currentStripCounter + 1, 0); /*0x796133*/
  v6 = this->perLodStripLengths.begin; /*0x796138*/
  if ( !v6 || lodLevel >= (unsigned int)(this->perLodStripLengths.end - v6) ) /*0x796149*/
    _invalid_parameter_noinfo(); /*0x79614b*/
  v7 = &this->perLodStripLengths.begin[lodLevel]; /*0x796156*/
  v8 = v7->begin; /*0x79615a*/
  currentStripCounter = this->currentStripCounter; /*0x79615f*/
  if ( !v8 || currentStripCounter >= v7->end - v8 ) /*0x79616e*/
    _invalid_parameter_noinfo(); /*0x796170*/
  v7->begin[currentStripCounter] = stripLength; /*0x79617d*/
  v10 = this->perLodStrips.begin; /*0x796181*/
  if ( !v10 || lodLevel >= (unsigned int)(this->perLodStrips.end - v10) ) /*0x796192*/
    _invalid_parameter_noinfo(); /*0x796194*/
  OB_stVector4_ResizeFill_010201A0( /*0x7961ab*/
    (OB_stVector4_010201A0 *)&this->perLodStrips.begin[lodLevel],
    this->currentStripCounter + 1,
    0);
  v11 = this->perLodStrips.begin; /*0x7961b0*/
  if ( !v11 || lodLevel >= (unsigned int)(this->perLodStrips.end - v11) ) /*0x7961c1*/
    _invalid_parameter_noinfo(); /*0x7961c3*/
  v12 = this->currentStripCounter; /*0x7961c8*/
  v13 = &this->perLodStrips.begin[lodLevel]; /*0x7961d1*/
  v14 = v13->begin; /*0x7961d4*/
  if ( !v14 || v12 >= v13->end - v14 ) /*0x7961e5*/
    _invalid_parameter_noinfo(); /*0x7961e7*/
  v13->begin[v12] = strip; /*0x7961f3*/
  v15 = this->perLodTriangleCounts.begin; /*0x7961f6*/
  if ( !v15 || lodLevel >= (unsigned int)(this->perLodTriangleCounts.end - v15) ) /*0x796209*/
    _invalid_parameter_noinfo(); /*0x79620b*/
  this->perLodTriangleCounts.begin[lodLevel] += stripLength - 2; /*0x79621e*/
}
