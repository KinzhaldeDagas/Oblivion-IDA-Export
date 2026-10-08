// CULLING audit 2026-09-27 (observed Oblivion behavior): Reads one 16-byte NiPlane, not a NiFrustumPlanes aggregate. Signed distance is dot(normal, bound.center) - constant, with float stores at 0x47DA88 and 0x47DA93. For finite valid bounds: 2=outside when distance <= -radius; 1=inside when distance >= radius; otherwise 0=crossing. Exact outside tangency rejects. ABI: bound in ECX, plane pointer on stack, RET 4. Keep the native x87 rounding/comparisons.
int __thiscall NiBound_ClassifyAgainstPlane(const NiBound *self, const NiPlane *plane)
{
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]

  v4 = plane->Normal.y * self->Center.y + plane->Normal.x * self->Center.x + plane->Normal.z * self->Center.z; /*0x47da88*/
  v5 = v4 - plane->Constant; /*0x47da93*/
  if ( -self->Radius < v5 ) /*0x47daa7*/
    return self->Radius <= (double)v5; /*0x47dabd*/
  else
    return 2; /*0x47daab*/
}
