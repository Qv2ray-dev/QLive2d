/**
 * Copyright(c) Live2D Inc. All rights reserved.
 *
 * Use of this source code is governed by the Live2D Open Software license
 * that can be found at https://www.live2d.com/eula/live2d-open-software-license-agreement_en.html.
 */

#include "CubismId.hpp"

#include "Type/CubismBasicType.hpp"

namespace Live2D
{
    namespace Cubism
    {
        namespace Framework
        {

            CubismId::CubismId()
            {
            }

            CubismId::CubismId(const QString &str) : _id(str)
            {
            }
            CubismId::CubismId(const CubismId &c) : _id(c._id)
            {
                _id = c._id;
            }

            CubismId::~CubismId()
            {
            }

            CubismId &CubismId::operator=(const CubismId &c)
            {
                if (this != &c)
                {
                    _id = c._id;
                }

                return *this;
            }

            bool CubismId::operator==(const CubismId &c) const
            {
                return (_id == c._id);
            }

            bool CubismId::operator!=(const CubismId &c) const
            {
                return !(_id == c._id);
            }

            const QString CubismId::GetString() const
            {
                return _id;
            }

        } // namespace Framework
    }     // namespace Cubism
} // namespace Live2D
