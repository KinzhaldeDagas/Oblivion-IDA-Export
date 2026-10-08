// Verified row-major multiplication output is `this * right`; QueuedDistantLOD_ApplyTransform therefore composes BaseRotation, X, Y, then Z matrices in that order.
NiMatrix33 *__thiscall NiMAtrix33_Multiply(NiMatrix33 *this, NiMatrix33 *out, NiMatrix33 *right)
{
  out->data[0][0] = right->data[0][0] * this->data[0][0] /*0x7100bc*/
                  + right->data[1][0] * this->data[0][1]
                  + right->data[2][0] * this->data[0][2];
  out->data[1][0] = this->data[1][1] * right->data[1][0] /*0x7100d3*/
                  + this->data[1][0] * right->data[0][0]
                  + right->data[2][0] * this->data[1][2];
  out->data[2][0] = this->data[2][1] * right->data[1][0] /*0x7100eb*/
                  + this->data[2][0] * right->data[0][0]
                  + right->data[2][0] * this->data[2][2];
  out->data[0][1] = right->data[0][1] * this->data[0][0] /*0x710103*/
                  + right->data[1][1] * this->data[0][1]
                  + this->data[0][2] * right->data[2][1];
  out->data[1][1] = right->data[1][1] * this->data[1][1] /*0x71011c*/
                  + right->data[0][1] * this->data[1][0]
                  + right->data[2][1] * this->data[1][2];
  out->data[2][1] = right->data[1][1] * this->data[2][1] /*0x710135*/
                  + this->data[2][0] * right->data[0][1]
                  + right->data[2][1] * this->data[2][2];
  out->data[0][2] = right->data[0][2] * this->data[0][0] /*0x71014d*/
                  + right->data[1][2] * this->data[0][1]
                  + this->data[0][2] * right->data[2][2];
  out->data[1][2] = right->data[1][2] * this->data[1][1] /*0x710166*/
                  + right->data[0][2] * this->data[1][0]
                  + right->data[2][2] * this->data[1][2];
  out->data[2][2] = right->data[1][2] * this->data[2][1] /*0x71017f*/
                  + this->data[2][0] * right->data[0][2]
                  + right->data[2][2] * this->data[2][2];
  return out; /*0x710182*/
}
