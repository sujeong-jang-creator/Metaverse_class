import React from 'react';
class CustomerProfile extends React.Component  {
    render(){
        return (
            <div>
            <img src={this.props.image} alt="profile"/>
            <h2>{this.props.name}({this.props.id})</h2>             
            </div>
            )
    }
}

export default CustomerProfile;